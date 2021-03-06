//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCRequest.h"

@class NSArray, NSString, SDLImage, SDLKeyboardProperties;

@interface SDLSetGlobalProperties : SDLRPCRequest
{
}

@property(retain, nonatomic) SDLKeyboardProperties *keyboardProperties;
@property(retain, nonatomic) SDLImage *menuIcon;
@property(retain, nonatomic) NSString *menuTitle;
@property(retain, nonatomic) NSArray *vrHelp;
@property(retain, nonatomic) NSString *vrHelpTitle;
@property(retain, nonatomic) NSArray *timeoutPrompt;
@property(retain, nonatomic) NSArray *helpPrompt;
- (id)initWithHelpText:(id)arg1 timeoutText:(id)arg2 vrHelpTitle:(id)arg3 vrHelp:(id)arg4 menuTitle:(id)arg5 menuIcon:(id)arg6 keyboardProperties:(id)arg7;
- (id)initWithHelpText:(id)arg1 timeoutText:(id)arg2 vrHelpTitle:(id)arg3 vrHelp:(id)arg4;
- (id)initWithHelpText:(id)arg1 timeoutText:(id)arg2;
- (id)init;

@end

