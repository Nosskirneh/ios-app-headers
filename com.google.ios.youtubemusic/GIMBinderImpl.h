//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIMBinder-Protocol.h"

@class NSArray, NSMutableArray;

@interface GIMBinderImpl : NSObject <GIMBinder>
{
    NSMutableArray *_bindingBuilders;
    NSMutableArray *_moduleNames;
    NSArray *_bindings;
    GIMBinderImpl *_overriddenBinder;
    GIMBinderImpl *_overridingBinder;
}

- (void).cxx_destruct;
- (void)installModule:(id)arg1;
- (id)bindKey:(id)arg1;
- (id)bindDictionaryFromType:(id)arg1 toType:(id)arg2;
- (id)bindArrayOfType:(id)arg1;
- (id)bindType:(id)arg1;
@property(readonly, nonatomic) NSArray *bindings; // @synthesize bindings=_bindings;
@property(readonly, nonatomic) GIMBinderImpl *overridingBinder; // @synthesize overridingBinder=_overridingBinder;
@property(readonly, nonatomic) GIMBinderImpl *overriddenBinder; // @synthesize overriddenBinder=_overriddenBinder;
- (id)init;

@end
