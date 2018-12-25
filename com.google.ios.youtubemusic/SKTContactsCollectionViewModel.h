//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewModel.h"

@class GOOTextContentViewObject, SKTContactContentViewObject, SKTContactsDataManager, SKTUIOptions;
@protocol SKTContactsCollectionViewModelDelegate, SKTInteractionLogger;

@interface SKTContactsCollectionViewModel : QTMCollectionViewModel
{
    SKTContactsDataManager *_contactsDataManager;
    id <SKTInteractionLogger> _interactionLogger;
    SKTUIOptions *_uiOptions;
    SKTContactContentViewObject *_expandedContentViewObject;
    GOOTextContentViewObject *_objectForShowDeviceContacts;
    GOOTextContentViewObject *_objectForNoContacts;
}

@property(retain, nonatomic) GOOTextContentViewObject *objectForNoContacts; // @synthesize objectForNoContacts=_objectForNoContacts;
@property(retain, nonatomic) GOOTextContentViewObject *objectForShowDeviceContacts; // @synthesize objectForShowDeviceContacts=_objectForShowDeviceContacts;
@property(retain, nonatomic) SKTContactContentViewObject *expandedContentViewObject; // @synthesize expandedContentViewObject=_expandedContentViewObject;
@property(retain, nonatomic) SKTUIOptions *uiOptions; // @synthesize uiOptions=_uiOptions;
@property(readonly, nonatomic) id <SKTInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) SKTContactsDataManager *contactsDataManager; // @synthesize contactsDataManager=_contactsDataManager;
- (void).cxx_destruct;
- (id)contactAtIndexPath:(id)arg1;
- (id)contentViewObjectsForContacts:(id)arg1 contactSource:(long long)arg2 colorOverrides:(id)arg3;
- (id)initWithDelegate:(id)arg1 contactsDataManager:(id)arg2 uiOptions:(id)arg3 analyticsProvider:(id)arg4;

// Remaining properties
@property(nonatomic) __weak id <SKTContactsCollectionViewModelDelegate> delegate; // @dynamic delegate;

@end

