//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "SPTThemableViewLayoutDelegate-Protocol.h"
#import "SPTViewOfflineSwitchDelegate-Protocol.h"

@class GLUETableViewCellStyle, NSString, SPTLayoutConstraintBuilder, SPTNetworkConnectivityController, SPTViewOfflineSwitch;
@protocol SPTModalPresentationController, SPTOfflineSwitchDelegate, SPTProductState;

@interface SPTTableViewOfflineSwitchCell : UITableViewCell <SPTThemableViewLayoutDelegate, SPTViewOfflineSwitchDelegate>
{
    id <SPTOfflineSwitchDelegate> _delegate;
    SPTNetworkConnectivityController *_networkConnectivityController;
    SPTViewOfflineSwitch *_offlineSwitchView;
    unsigned long long _lastAvailability;
    id <SPTProductState> _productState;
    id <SPTModalPresentationController> _modalPresentationController;
    GLUETableViewCellStyle *_tableViewCellStyle;
    SPTLayoutConstraintBuilder *_layoutConstraintBuilder;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *layoutConstraintBuilder; // @synthesize layoutConstraintBuilder=_layoutConstraintBuilder;
@property(retain, nonatomic) GLUETableViewCellStyle *tableViewCellStyle; // @synthesize tableViewCellStyle=_tableViewCellStyle;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) unsigned long long lastAvailability; // @synthesize lastAvailability=_lastAvailability;
@property(retain, nonatomic) SPTViewOfflineSwitch *offlineSwitchView; // @synthesize offlineSwitchView=_offlineSwitchView;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(nonatomic) __weak id <SPTOfflineSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)offlineSwitchViewOfflineAvailability:(id)arg1;
- (void)offlineSwitchViewDidChangeState:(id)arg1 isOn:(_Bool)arg2;
- (void)configureAutoLayouts;
- (void)layoutSubviews;
- (void)reload;
@property(nonatomic, getter=isOn) _Bool on;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithStyle:(long long)arg1 productState:(id)arg2 modalPresentationController:(id)arg3;
- (id)initWithProductState:(id)arg1 modalPresentationController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

