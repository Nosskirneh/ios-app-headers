//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface BackgroundTaskJanitor : NSObject
{
    NSArray *_backgroundChores;
}

@property(readonly, nonatomic) NSArray *backgroundChores; // @synthesize backgroundChores=_backgroundChores;
- (void).cxx_destruct;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (id)initWithBackgroundChores:(id)arg1;
- (id)initWithOfflineSync:(id)arg1;

@end
