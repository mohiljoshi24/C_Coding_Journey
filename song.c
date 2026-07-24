#include <stdio.h>
#include <string.h>

// Handle delay function differences between Windows and Mac/Linux
#ifdef _WIN32

    #include <windows.h>
    #define sleep_ms(ms) Sleep(ms)

#else

    #include <unistd.h>
    #define sleep_ms(ms) usleep((ms) * 700)

#endif

int main() {
    
    // Song lyrics broken down by lines
    const char *lyrics[] = {
       "[Intro]",
"Yeah",
"This one's for the ones who feel like it's all slipping away",
"For the nights you thought about giving up",
"But you didn't",
"You got victory in your veins",
"Remember that",

"[Pre-Chorus]",
"I got victory in my veins, I was born to rise",
"Every scar on my heart is a badge of pride",
"When the darkness came, I refused to hide",
"I'm alive, I'm unbreakable, I'm still gon' fight",

"[Chorus]",
"I got victory in my veins, you can see that spark",
"All the nights I was lost couldn't kill my heart",
"Yeah, I've been through hell but I won that war",
"I'm alive, I'm unbreakable, I'm so much more",

"[Verse 1]",
"I came up from the struggle where the hopе was thin",
"Where the rеnt was late and the lights went dim",
"Mama crying in the kitchen just to keep us fed",
"I was lying in my bed with a war in my head",
"Poverty tried to chain me, depression tried to claim me",
"People said I'd never make it, they could never break me",
"Had to fight for every breath, every step I take",
"Now I'm stronger than the nights that I couldn't escape",
"Every loss made me hungry, every tear made me wise",
"Turned the pain to a promise that I keep in my mind",
"Ain't no quit in my spirit, ain't no fear in my lane",
"I'm a soldier of the struggle, got that fire in my name",

"[Bridge]",
"If you feel like you're falling, like it's all too much",
"Let this song be the hand that lifts you up",
"Yeah, we all got demons, but they ain't that strong",
"When you learn to believe, you can right those wrongs",

"[Pre-Chorys]",
"I got victory in my veins, I was born to rise",
"Every scar on my heart is a badge of pride",
"When the darkness came, I refused to hide",
"I'm alive, I'm unbreakable, I'm still gon' fight",

"[Chorus]",
"I got victory in my veins, you can see that spark",
"All the nights I was lost couldn't kill my heart",
"Yeah, I've been through hell but I won that war",
"I'm alive, I'm unbreakable, I'm so much more",

"[Verse 2]",
"I remember all the times I was close to the edge",
"Felt the weight of the world try to bury my head",
"But I rose like a phoenix from the ashes of doubt",
"Got a voice for the voiceless and I'm screaming out loud",
"For the kids in the struggle who ain't got no peace",
"For the ones with a dream they afraid to reach",
"You ain't gotta stay broken, you ain't gotta stay small",
"There's a giant in your heart that can conquer it all",
"Yeah, the nights get cold and the road gets rough",
"But you're stronger than the hurt that was never enough",
"So stand up, chin high, let 'em feel your flame",
"You got victory in your veins, never be the same",


"[Bridge]",
"Oh, we rise, we heal, we fight",
"We feel no fear, no shame, we own our pain",
"Victory's in our veins",

"[Pre-Chorus]",
"I got victory in my veins, I was born to rise",
"Every scar on my heart is a badge of pride",
"When the darkness came, I refused to hide",
"I'm alive, I'm unbreakable, I'm still gon' fight",

"[Chorus]",
"I got victory in my veins, you can see that spark",
"All the nights I was lost couldn't kill my heart",
"Yeah, I've been through hell but I won that war",
"I'm alive, I'm unbreakable, I'm so much more",

"[Outro]",
"If you're hearing this right now",
"You're still here",
"That means you're undefeated",
"That means you got victory in your veins",
    };

    int total_lines = sizeof(lyrics) / sizeof(lyrics[0]);

    printf("\n==================================================\n");
    printf("    TODAYS'S MASTERPEICE: VICTORY IN MY VEINS      \n");
    printf("====================================================\n\n");
    
    sleep_ms(700); // 1-second pause before starting

    for (int i = 0; i < total_lines; i++) {
        // Make a copy of the string because strtok modifies it
        char line_copy[256];
        strcpy(line_copy, lyrics[i]);

        // Break the line into individual words
        char *word = strtok(line_copy, " ");
        while (word != NULL) {
            printf("%s ", word);
            fflush(stdout);  // Forces the word to display immediately on screen
            
            sleep_ms(150);   // Delay between words in milliseconds (adjust speed here)
            word = strtok(NULL, " ");
        }
        
        printf("\n");
        sleep_ms(350);       // Pause at the end of each line
    }

    printf("\n=========================================\n");
    return 0;
}