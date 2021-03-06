//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKInAppMessage.h"

@class NSArray, NSString, UIColor;

@interface ABKInAppMessageImmersive : ABKInAppMessage
{
    _Bool _inAppMessageButtonClickedIsLogged;
    NSString *_header;
    UIColor *_headerTextColor;
    UIColor *_closeButtonColor;
    NSArray *_buttons;
    UIColor *_frameColor;
    long long _headerTextAlignment;
    long long _imageStyle;
}

@property _Bool inAppMessageButtonClickedIsLogged; // @synthesize inAppMessageButtonClickedIsLogged=_inAppMessageButtonClickedIsLogged;
@property long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property long long headerTextAlignment; // @synthesize headerTextAlignment=_headerTextAlignment;
@property(retain) UIColor *frameColor; // @synthesize frameColor=_frameColor;
@property(retain) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain) UIColor *closeButtonColor; // @synthesize closeButtonColor=_closeButtonColor;
@property(retain) UIColor *headerTextColor; // @synthesize headerTextColor=_headerTextColor;
@property(copy) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)inAppMessageImageStyleName:(long long)arg1;
- (void)setInAppMessageButtons:(id)arg1;
- (void)logInAppMessageClickedWithButtonID:(long long)arg1;
- (id)proxyForJson;
- (id)description;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

