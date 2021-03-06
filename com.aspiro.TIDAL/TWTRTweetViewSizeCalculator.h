//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TWTRTweetView;

@interface TWTRTweetViewSizeCalculator : NSObject
{
    TWTRTweetView *_regularTweetView;
    TWTRTweetView *_compactTweetView;
}

+ (double)heightForTweet:(id)arg1 style:(unsigned long long)arg2 fittingWidth:(double)arg3 showingActions:(_Bool)arg4;
+ (double)calculatedHeightForTweet:(id)arg1 style:(unsigned long long)arg2 fittingWidth:(double)arg3 showingActions:(_Bool)arg4;
+ (id)heightCache;
+ (id)compactTweetView;
+ (id)regularTweetView;
+ (id)cachedTweetViewForStyle:(unsigned long long)arg1;
@property(retain, nonatomic) TWTRTweetView *compactTweetView; // @synthesize compactTweetView=_compactTweetView;
@property(retain, nonatomic) TWTRTweetView *regularTweetView; // @synthesize regularTweetView=_regularTweetView;
- (void).cxx_destruct;

@end

