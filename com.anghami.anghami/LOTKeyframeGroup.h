//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface LOTKeyframeGroup : NSObject
{
    NSArray *_keyframes;
}

@property(readonly, nonatomic) NSArray *keyframes; // @synthesize keyframes=_keyframes;
- (void).cxx_destruct;
- (void)remapKeyframesWithBlock:(CDUnknownBlockType)arg1;
- (void)buildKeyframesFromData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

