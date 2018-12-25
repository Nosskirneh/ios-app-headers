//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTNodeController.h"

#import "YTElementsStoreSubscriber-Protocol.h"
#import "YTTemplateModel-Protocol.h"

@class NSString;
@protocol YTNodeProtocol;

@interface YTComponent : YTNodeController <YTTemplateModel, YTElementsStoreSubscriber>
{
    id _previousState;
    NSString *_stateId;
    YTComponent *_rootComponent;
    id <YTNodeProtocol> _instance;
}

@property(retain, nonatomic) id <YTNodeProtocol> instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (void)loadNodeWithElement:(id)arg1;
- (void)applyUpdateWithForce:(_Bool)arg1 previousView:(id)arg2 previousParentView:(id)arg3;
- (void)requestUpdate:(_Bool)arg1;
- (void)updateWithElement:(id)arg1 force:(_Bool)arg2;
- (void)performDiff;
- (void)performUpdateWithElement:(id)arg1 shouldUpdate:(_Bool)arg2;
- (id)processTemplateWithTransform:(id)arg1;
@property(readonly, nonatomic) id props;
- (void)loadNode;
- (void)storeDidUpdateAtKey:(id)arg1 withPreviousModel:(id)arg2 newModel:(id)arg3;
- (_Bool)shouldUpdateWithElement:(id)arg1;
- (void)forceUpdate;
- (void)updateWithElement:(id)arg1;
- (void)didMaterialize;
- (void)willUpdateElement:(id)arg1;
- (void)didExitPreloadState;
- (void)didEnterPreloadState;
- (void)didExitDisplayState;
- (void)didEnterDisplayState;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)updateState:(CDUnknownBlockType)arg1;
- (id)initialState;
@property(readonly, nonatomic) NSString *stateId;
@property(readonly, nonatomic) id state;
- (id)materialize;
- (_Bool)shouldUpdateWithElement:(id)arg1 state:(id)arg2;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
