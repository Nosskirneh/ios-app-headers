//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANGAdLoader, NSTimer;

@interface ANGSkipAlertManager : NSObject
{
    NSTimer *_skipsVideoAdTagTimer;
    ANGAdLoader *_skipsAdLoader;
}

+ (void)prepareLogin;
+ (void)showSkipsAlertSong:(id)arg1 playQueue:(id)arg2 timeRemaining:(long long)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isSkipsVideoAdLoaded;
- (void)presentSkipsVideoAdWithSong:(id)arg1 andPlayQueue:(id)arg2;
- (void)loadSkipsVideoAdTag:(id)arg1;
- (void)loadSkipsVideoAdTag;

@end

