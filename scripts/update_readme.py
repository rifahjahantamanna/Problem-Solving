from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

PLATFORMS = [
    "LeetCode",
    "Codeforces",
    "HackerRank",
    "CodeChef",
    "AtCoder",
    "CSES",
    "LightOJ",
    "Beecrowd",
    "UVA",
]

EXTENSIONS = {
    ".cpp",
    ".c",
    ".py",
    ".java",
    ".js",
    ".ts",
}

BAR_LENGTH = 20

counts = {}

total = 0

for platform in PLATFORMS:

    folder = ROOT / platform

    if folder.exists():

        count = sum(
            1
            for f in folder.rglob("*")
            if f.is_file() and f.suffix.lower() in EXTENSIONS
        )

    else:
        count = 0

    counts[platform] = count
    total += count

highest = max(counts.values(), default=1)

lines = ["```text"]

for platform, count in counts.items():

    filled = int((count / highest) * BAR_LENGTH) if highest else 0

    bar = "█" * filled + "░" * (BAR_LENGTH - filled)

    lines.append(f"{platform:<12} {bar} {count}")

lines.append("")
lines.append("-" * 40)
lines.append(f"Total Problems Solved: {total}")
lines.append("```")

progress = "\n".join(lines)

readme = ROOT / "README.md"

content = readme.read_text(encoding="utf-8")

start = "<!--START_PROGRESS-->"
end = "<!--END_PROGRESS-->"

new = (
    content.split(start)[0]
    + start
    + "\n"
    + progress
    + "\n"
    + end
    + content.split(end)[1]
)

readme.write_text(new, encoding="utf-8")

print("README Updated!")