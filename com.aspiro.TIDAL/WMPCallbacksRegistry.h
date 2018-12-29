//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WMPCallbacksRegistry : NSObject
{
    NSMutableDictionary *_registry;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (void)propagateRejecterForKey:(id)arg1 error:(id)arg2;
- (void)propagateFulfillerForKey:(id)arg1 data:(id)arg2;
- (void)propagateProgressForKey:(id)arg1 data:(id)arg2;
- (void)propagateCallbacksForKey:(id)arg1 fieldName:(id)arg2 data:(id)arg3 complete:(_Bool)arg4;
- (void)registerCallbacksForKey:(id)arg1 fulfiller:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4;
- (_Bool)containsKey:(id)arg1;
- (id)init;

@end

