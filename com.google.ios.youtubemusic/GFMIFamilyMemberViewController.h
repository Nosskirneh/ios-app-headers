//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GFMIBaseListViewController.h"

#import "GFMIConfirmationDelegate-Protocol.h"

@class GFMIPersonIdentifier, GIMMe, GKSNavigationalListItemContentViewObject;

@interface GFMIFamilyMemberViewController : GFMIBaseListViewController <GFMIConfirmationDelegate>
{
    GFMIPersonIdentifier *_identifier;
    GKSNavigationalListItemContentViewObject *_removeMemberViewObject;
    GKSNavigationalListItemContentViewObject *_removeParentViewObject;
    GKSNavigationalListItemContentViewObject *_leaveFamilyViewObject;
}

@property(retain, nonatomic) GKSNavigationalListItemContentViewObject *leaveFamilyViewObject; // @synthesize leaveFamilyViewObject=_leaveFamilyViewObject;
@property(retain, nonatomic) GKSNavigationalListItemContentViewObject *removeParentViewObject; // @synthesize removeParentViewObject=_removeParentViewObject;
@property(retain, nonatomic) GKSNavigationalListItemContentViewObject *removeMemberViewObject; // @synthesize removeMemberViewObject=_removeMemberViewObject;
@property(retain, nonatomic) GFMIPersonIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)previousViewController;
- (id)managementItemsForPerson:(id)arg1 currentlyLoggedInUser:(id)arg2 withManagementCapabilities:(id)arg3 page:(id)arg4;
- (void)renderContentViewsForPerson:(id)arg1 currentlyLoggedInUser:(id)arg2 config:(id)arg3;
- (void)renderHeaderForPerson:(id)arg1;
- (void)actionPerformed;
- (unsigned long long)collectionView:(id)arg1 inkTouchStyleAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)executeViewRefresh;
- (void)viewDidLoad;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

