module ram_tb;

reg clk;
reg write_enable;
reg [9:0]address;
reg [7:0]data_in;
wire [7:0]data_out;

ram uut(clk,write_enable,address,data_in,data_out);

initial begin
clk = 0;
data_in = 8'h56;
write_enable = 0;
address = 55;
#20
write_enable = 1;
#20;
write_enable = 0;
address = 66;
data_in = 8'h36;
#20
write_enable = 1;
#20
write_enable = 0;
#20
address = 55;
#20
$finish();

end

always #10 clk = ~clk;  //clock generation

endmodule
