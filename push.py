import subprocess
import argparse
p = argparse.ArgumentParser()
p.add_argument("stg", help = "specs for stage")
p.add_argument("commit_message", help = "In quotes like \"Message\"")
a = p.parse_args()
subprocess.call("git status", shell = True)
input()
subprocess.call("git add " + a.stg + " && git commit -m "  + "\"" + a.commit_message + "\"" + " && git push origin master", shell = True)
