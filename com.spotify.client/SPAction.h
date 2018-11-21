//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUEImageStyle, NSString, NSURL, UIColor, UIImage;

@interface SPAction : NSObject
{
    NSString *_accessibilityHint;
    UIColor *_iconColor;
    long long _icon;
    UIImage *_image;
    GLUEImageStyle *_imageStyle;
    NSString *_logEventName;
    NSString *_logContext;
    NSURL *_logEntityURL;
}

@property(readonly, nonatomic) NSURL *logEntityURL; // @synthesize logEntityURL=_logEntityURL;
@property(readonly, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
@property(readonly, nonatomic) NSString *logEventName; // @synthesize logEventName=_logEventName;
@property(readonly, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(readonly, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) long long style;
@property(readonly, nonatomic) NSString *title;
- (id)initWithLogContext:(id)arg1;

@end

