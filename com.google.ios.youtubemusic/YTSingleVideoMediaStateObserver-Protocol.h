//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol YTSingleVideoObservable;

@protocol YTSingleVideoMediaStateObserver <NSObject>
- (void)singleVideo:(id <YTSingleVideoObservable>)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
@end

