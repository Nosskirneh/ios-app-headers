//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIMProvider-Protocol.h"

@class GIMMe, NSString;

@interface GIMSharedClassProvider : NSObject <GIMProvider>
{
    CDUnknownBlockType _builderBlock;
    GIMMe *_gimme;
}

+ (id)providerWithBuilderBlock:(CDUnknownBlockType)arg1;
+ (id)providerWithClass:(Class)arg1 selector:(SEL)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id instance;
- (void)gimmeDidOpen:(id)arg1;
- (id)initWithBuilderBlock:(CDUnknownBlockType)arg1 class:(Class)arg2 selector:(SEL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
