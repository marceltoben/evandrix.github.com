% Application constants
L    = 1000;       % length of signal
NFFT = 2^nextpow2(L);
Fs   = 32768;      % sampling frequency
t    = (0:L-1)/Fs; % time vector

handle = openfig('CA3.fig', 'reuse');
hAxes = get(handle, 'Children');
y = zeros(length(hAxes), 1000);
for counter=1:length(hAxes)
    hAxes  = get(handle, 'Children');
    hLines = get(hAxes(counter), 'Children');
    y(counter, :) = get(hLines, 'YData');
end

high_values = [1209, 1336, 1477];
twohigh_values = [697, 770, 852, 941];

for counter=1:length(hAxes)
    Y1 = fft(y(counter, :),NFFT)/L;
    f1 = Fs/2*linspace(0,1,NFFT/2);
    subplot(3,2,counter);
    
    % First, we need some data
    X = f1; Y = 2*abs(Y1(1:NFFT/2));
    Y_temp = unique(Y);
    SecondLargest = Y_temp(length(Y_temp)-1);
    % Do the same for the max
    High = find(Y == max(Y));
    % Just in case there are multiple maxes
    High = High(1);
    % Do the same for the max
    TwoHigh = find(Y == SecondLargest);
    % Just in case there are multiple maxes
    TwoHigh = TwoHigh(1);
    
    % Plot and annotate the results
    plot(X,Y,'', X(High),Y(High),'', X(TwoHigh),Y(TwoHigh),'');
    text(X(High),Y(High),       strcat('Max:',num2str(X(High))));
    text(X(TwoHigh),Y(TwoHigh), strcat('2nd Max:',num2str(X(TwoHigh))));
    
    left   = min(X(High), X(TwoHigh));
    bottom = max(X(High), X(TwoHigh));
    
    high_diff = abs(high_values - [bottom, bottom, bottom]);
    [ ~, high_index ] = min(high_diff);
    twohigh_diff = abs(twohigh_values - [left, left, left, left]);
    [ ~, twohigh_index ] = min(twohigh_diff);
    
    value = (twohigh_index-1)*3+high_index;
    
    if (value > 9)
        if (value == 10) btnPressed = '*';
        elseif (value == 11) btnPressed = '0';
        elseif (value == 12) btnPressed = '#';
        end
        title(['Button ', btnPressed, ' pressed']);
    else
        title(['Button ', num2str(value), ' pressed']);
    end
end
