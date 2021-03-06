//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPreCurationService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFreeTierPreCurationTheme;
@protocol SPTCollectionPlatformService, SPTGLUEService;

@interface SPTFreeTierPreCurationServiceImplementation : NSObject <SPTFreeTierPreCurationService>
{
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTGLUEService> _glueService;
    SPTFreeTierPreCurationTheme *_theme;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFreeTierPreCurationTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (void).cxx_destruct;
- (id)provideTheme;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

