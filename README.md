# @HACK 2025: 100% Wrong

> Authored by [Anis](https://github.com/AnixPasBesoin).

- **Category**: `Pwn`
- **Value**: `150 points`
- **Tags**: `tcp`

> Meet "100% Wrong", the ultimate self-esteem destroyer. This sadistic bot was designed by Jester to make you fail. 
> It asks impossible questions, ensures your answers are incorrect, and follows up with personalized reminders that 
> you are always wrong.
> 
> The bot consists of a command-line binary that has a hardcoded flag. A flagless clone of the binary is provided for you 
> to inspect offline. However, to interact with the real bot (that has the flag), you should connect to it remotely 
> (over a TCP socket).
> 

## Files
- **[Download: one-hundred-percent-wrong-using-dummy-flag](https://github.com/athack-ctf/chall2025-one-hundred-percent-wrong/raw/refs/heads/main/offline-artifacts/one-hundred-percent-wrong-using-dummy-flag)**

## Access a dockerized instance

Run challenge container using docker compose
```
docker compose up -d
```
Connect to the TCP socket (e.g., using nc command)
```
nc localhost 52029 
```
<details>
<summary>
How to stop/restart challenge?
</summary>

To stop the challenge run
```
docker compose stop
```
To restart the challenge run
```
docker compose restart
```

</details>


## Reveal Flag

Did you try solving this challenge?
<details>
<summary>
Yes
</summary>

Did you **REALLY** try solving this challenge?

<details>
<summary>
Yes, I promise!
</summary>

Flag: `ATHACKCTF{f0rm4t_5tring_vulner4bilitie5}`

</details>
</details>


---

## About @HACK
[@HACK](https://athackctf.com/) is an annual CTF (Capture The Flag) competition hosted by [HEXPLOIT ALLIANCE](https://hexploit-alliance.com/) and [TECHNATION](https://technationcanada.ca/) at Concordia University in Montreal, Canada.

---
[Check more challenges from @HACK 2025](https://github.com/athack-ctf/AtHackCTF-2025-Challenges).