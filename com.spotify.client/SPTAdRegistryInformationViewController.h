//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPTAdRegistryObserver-Protocol.h"

@class NSString, SPTAdEntity, SPTAdRegistry;
@protocol GLUEImageLoader, GLUETheme, SPTContainerUIService, SPTLinkDispatcher;

@interface SPTAdRegistryInformationViewController : SPTableViewController <SPTAdRegistryObserver>
{
    SPTAdRegistry *_registry;
    id <SPTContainerUIService> _containerUIService;
    id <GLUEImageLoader> _glueImageLoader;
    id <GLUETheme> _glueTheme;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTAdEntity *_currentEntity;
}

@property(nonatomic) __weak SPTAdEntity *currentEntity; // @synthesize currentEntity=_currentEntity;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(readonly, nonatomic) __weak SPTAdRegistry *registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (void)setupLeadingAccessoryForCell:(id)arg1 forEntity:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setupContentViewForCell:(id)arg1;
- (void)layoutLabelForCell:(id)arg1 forEntity:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (void)dismiss;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRegistry:(id)arg1 currentEntity:(id)arg2 containerService:(id)arg3 glueImageLoader:(id)arg4 linkDispatcher:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

