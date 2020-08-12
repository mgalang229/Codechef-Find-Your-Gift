#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--)
    {
		int n, x = 0, y = 0;
		cin >> n;
		
		char s[1000];
		for(int i = 0; i < n; ++i)
		{
			cin >> s[i];
			
			if(i >= 1)
			{
				if(s[i] == 'L' || s[i] == 'R')
				{
					if(s[i-1] == 'L' || s[i-1] == 'R')
						continue;
				}
				
				if(s[i] == 'U' || s[i] == 'D')
				{
					if(s[i-1] == 'U' || s[i-1] == 'D')
						continue;
				}
			}
			
			if(s[i] == 'L')
				x--;
			else if(s[i] == 'R')
				x++;
			else if(s[i] == 'U')
				y++;
			else if(s[i] == 'D')
				y--;
		}
		
		cout << x << " " << y << "\n";
		
	}
    
    return 0;
}
