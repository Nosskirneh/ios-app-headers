//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FIRMessagingPacketQueue : NSObject
{
    NSMutableArray *_packetsContainer;
}

@property(retain, nonatomic) NSMutableArray *packetsContainer; // @synthesize packetsContainer=_packetsContainer;
- (void).cxx_destruct;
- (id)pop;
- (void)pushHead:(id)arg1;
- (void)push:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)init;

@end

