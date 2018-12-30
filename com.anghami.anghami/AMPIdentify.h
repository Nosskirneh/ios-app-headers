//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface AMPIdentify : NSObject
{
    NSMutableSet *_userProperties;
    NSMutableDictionary *_userPropertyOperations;
}

+ (id)identify;
@property(readonly, nonatomic) NSMutableDictionary *userPropertyOperations; // @synthesize userPropertyOperations=_userPropertyOperations;
- (void).cxx_destruct;
- (void)addToUserProperties:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)unset:(id)arg1;
- (id)setOnce:(id)arg1 value:(id)arg2;
- (id)set:(id)arg1 value:(id)arg2;
- (id)prepend:(id)arg1 value:(id)arg2;
- (id)clearAll;
- (id)append:(id)arg1 value:(id)arg2;
- (id)add:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)init;

@end

