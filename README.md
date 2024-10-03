Sistema de Monitoramento de Luminosidade com Arduino
Descrição do Projeto
Este projeto simula um sistema de monitoramento de luminosidade usando um sensor LDR (Light Dependent Resistor), três LEDs (verde, amarelo e vermelho) e um buzzer para emitir um alarme. Dependendo da quantidade de luz captada pelo LDR, o sistema sinaliza o status do ambiente:

LED Verde: A luminosidade está em nível seguro (OK).
LED Amarelo: A luminosidade está em nível de alerta, e o buzzer toca por 3 segundos.
LED Vermelho: A luminosidade está acima do limite permitido (problema grave).
Este projeto foi desenvolvido para a Vinheria Agnello, visando monitorar as condições de luminosidade na armazenagem de vinhos, onde o controle de luz é essencial para manter a qualidade dos produtos.

Componentes Utilizados
1x Arduino Uno
1x Sensor LDR (Resistor Dependente de Luz)
1x Buzzer
3x LEDs (Verde, Amarelo e Vermelho)
3x Resistores de 220Ω (para os LEDs)
1x Resistor de 10kΩ (para o LDR)
Fios e protoboard para as conexões
Como Funciona
O LDR detecta a luminosidade do ambiente e gera um valor analógico.
Dependendo do valor de luminosidade lido:
Se a luminosidade for inferior a 300: O LED verde acende (nível OK).
Se a luminosidade estiver entre 300 e 600: O LED amarelo acende e o buzzer soa por 3 segundos (nível de alerta).
Se a luminosidade for superior a 600: O LED vermelho acende (problema grave).
Limites Estipulados
LIMITE_OK: 300 (luminosidade segura).
LIMITE_ALERTA: 600 (início de alerta).
