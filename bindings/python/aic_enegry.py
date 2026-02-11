from .energy import get_energy_state
from .governance import send_signal, GovSignal

def health_check():
    e = get_energy_state()
    if e["load"] > 0.85:
        send_signal(GovSignal.WARNING)
    return e
