//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SRLScopedContainer-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SRLMemoizingScope : NSObject <SRLScopedContainer>
{
    NSMutableDictionary *_instancesInfo;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)scopeBlock:(CDUnknownBlockType)arg1 forClass:(Class)arg2;
- (void)removeMemoizedInstances;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
