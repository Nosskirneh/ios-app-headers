//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDPopupView.h"

@class IDButton, IDLabel;

@interface CustomPopupView : IDPopupView
{
    IDLabel *_popupMessage;
    IDButton *_button1;
    IDButton *_button2;
    IDButton *_button3;
}

@property(retain) IDButton *button3; // @synthesize button3=_button3;
@property(retain) IDButton *button2; // @synthesize button2=_button2;
@property(retain) IDButton *button1; // @synthesize button1=_button1;
@property(retain) IDLabel *popupMessage; // @synthesize popupMessage=_popupMessage;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 popupEvent:(long long)arg4 hmiProvider:(id)arg5;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 popupEvent:(long long)arg4;

@end

