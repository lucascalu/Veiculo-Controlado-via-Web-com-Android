# Veiculo-Controlado-via-Web-com-Android
Projeto de veículo controlado remotamente via Web usando  dispositivo Android e Arduíno.  


![alt text](https://github.com/lucascalu/Veiculo-Controlado-via-Web-com-Android/blob/master/WhatsApp%20Image%202020-08-13%20at%2010.39.16.jpeg?raw=true)

<h2>Lista de Materiais necessários </h2>

<h3> Arduíno compativel com comunicação Serial (Nano,Uno,Mini,etc) </h3>
<h3> celular Android compativel com comunicação Serial (via usb OTG,capaz de rodar software Arduino droid,Usb serial comunication), Aplicativo de multiplas execuções (Multi Window) e suporte remoto via apps (TeamViewer,Google,Remodroid,etc)  </h3>
<h3> Cabo Otg </h3>
<h3> Base para fixação das peças </h3>
<h3> Shield com 2 reles NA para arduíno (Pode ser utilizado ponte H também) </h3>
<h3> 2 Motores DC com rodas (pode ser utilizado a potencia de acordo com sua preferencia e possibilidade dentro do projeto)  </h3>
<h3> 1 Bateria(Capaz de suprir a necessidade dos motores) </h3>
<h3> 1 Rodízio giratório(Capaz de alinhar adequadamente a altura do veiculo) </h3>
<h3> 1 Mini protoboard para fixação de cabos no circuito ou PCB universal perfurada </h3>
<h3> Cabos,fita,estanho,Equipamento de proteção e demais ferramentas para manipulação dos componentes </h3>



<h2> Etapas </h2>

<p> Estando com todos os equipamentos de proteção em mãos podemos começar nossa montagem descarregando inicialmente o código VEICULO.INO e fazendo o carregamento do mesmo em seu dispositivo arduino(caso possua duvida em fazer esse procedimento é possível tirar suas duvidas no canal do Youtube Brincando com Ideias,o mesmo explica passo a passo estas etapas em seus videos).
    Faça a montagem do circuito conforme indicado no Diagrama na base.
    Conecte-se remotamente ao seu celular e abra as aplicações de comunicação serial e multi execução (Através dessa aplicação você podera deixar uma camera funcionando para monitoramento)
  
</p>

<br>  </br>

<h2> Funcionamento </h2>

<p> Ao enviar o comando 1 para o dispositvo o mesmo andará por 300 ms para a frente.
    Ao enviar o comando 3 para o dispositvo o mesmo andará por 300 ms para a direita.
    Ao enviar o comando 5 para o dispositvo o mesmo andará por 300 ms para a esquerda.
    Comandos 0,2 e 4 fazem a interrupção em caso de emergência.

</p>

<h2> Considerações </h2>

<p> Pode ser acrescentado comandos redundântes para maior confiabilidade ou ainda sensores e botões dentro do circuito para aumento da segurança do mesmo. </p>


![alt text](https://lh3.googleusercontent.com/8nwT1oyitY4nAh1zasfOCJzgsN-svQus2KDXhHGhMJrVarAdSu1AGPAyGULjb57ASJg=s180-rw)


