function [x] = dtmf(number_press)
counter = 1;
Fs = 32768;
T = 1/Fs;
L = 1000;
t = (0:L-1)*T;
while counter <= length(number_press)
switch(number_press)
    case {0}
        y = 0.5*(sin(2*pi*941*t) + sin(2*pi*1336*t));
        z = [941 1336];
        sound (z,Fs)
    case {1}
        y = 0.5*(sin(2*pi*697*t) + sin(2*pi*1209*t));
        z = [697 1209];
        sound (z,Fs)
    case {2}
        y = 0.5*(sin(2*pi*697*t) + sin(2*pi*1336*t));
        z = [697 1336];
        sound (z,Fs)
    case {3}
        y = 0.5*(sin(2*pi*697*t) + sin(2*pi*1477*t));
        z = [697 1477];
        sound (z,Fs)
    case {4}
        y = 0.5*(sin(2*pi*770*t) + sin(2*pi*1209*t));
        z = [770 1209];
        sound (z,Fs)
    case {5}
        y = 0.5*(sin(2*pi*770*t) + sin(2*pi*1336*t));
        z = [770 1336];
        sound (z,Fs)
    case {6}
        y = 0.5*(sin(2*pi*770*t) + sin(2*pi*1477*t));
        z = [770 1477];
        sound (z,Fs)
    case {7}
        y = 0.5*(sin(2*pi*852*t) + sin(2*pi*1209*t));
        z = [852 1209];
        sound (z,Fs)
    case {8}
        y = 0.5*(sin(2*pi*852*t) + sin(2*pi*1336*t));
        z = [852 1336];
        sound (z,Fs)
    case {9}
        y = 0.5*(sin(2*pi*852*t) + sin(2*pi*1477*t));
        z = [852 1477];
        sound (z,Fs)
    case {'*'}
        y = 0.5*(sin(2*pi*941*t) + sin(2*pi*1209*t));
        z = [941 1209];
        sound (z,Fs)
    otherwise
        y = 0.5*(sin(2*pi*941*t) + sin(2*pi*1477*t));
        z = [941 1477];
        sound (z,Fs)
end
counter = counter + 1;
x(counter,:) = z;
end
end
