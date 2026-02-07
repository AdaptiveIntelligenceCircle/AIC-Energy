# Security Policy – AIC-Energy

Security in AIC-Energy is not an afterthought.  
It is a **first-class design constraint**.

---

## Scope

This policy applies to:

- Core system architecture
- Energy intelligence logic
- Distributed coordination mechanisms
- Simulation and adaptive components
- Governance and control layers

---

## Security Philosophy

AIC-Energy follows these principles:

- Assume partial compromise
- Prefer containment over prevention-only models
- Design for graceful degradation
- Enable rollback, auditability, and human override
- Minimize irreversible actions

Security is not about absolute control, but **bounded trust**.

---

## Threat Model (Non-Exhaustive)

We explicitly consider:

- Malicious contributors
- Supply chain attacks
- Model manipulation or poisoning
- Data integrity corruption
- Emergent unsafe behavior from adaptive logic
- Centralization pressure over time

---

## Reporting a Vulnerability

If you discover a security vulnerability:

1. **Do NOT** open a public issue
2. Contact the maintainers privately with:
   - Clear description
   - Reproduction steps
   - Impact analysis
   - Suggested mitigation (if any)

We aim to acknowledge reports promptly and act responsibly.

---

## Responsible Disclosure

We follow responsible disclosure practices:

- Fix first, disclose later
- Coordinate timing when necessary
- Credit reporters unless anonymity is requested

---

## Out of Scope

The following are considered misuse, not vulnerabilities:

- Attempts to weaponize the system
- Requests to bypass ethical constraints
- Social engineering for privileged access
- “What if used for control/surveillance?” without mitigation intent

---

## Final Note

AIC-Energy does not promise invulnerability.

It promises **honest security reasoning**, transparency about failure, and refusal to trade safety for speed or power.
