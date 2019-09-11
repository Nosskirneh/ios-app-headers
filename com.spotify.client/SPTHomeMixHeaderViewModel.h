//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeMixDomainModelMediatorObserver-Protocol.h"

@class NSString, NSURL, SPTHomeMixDomainMediator, SPTHomeMixDomainModel, UIColor;
@protocol SPTHomeMixHeaderViewModelDelegate;

@interface SPTHomeMixHeaderViewModel : NSObject <SPTHomeMixDomainModelMediatorObserver>
{
    id <SPTHomeMixHeaderViewModelDelegate> _delegate;
    NSURL *_URI;
    NSString *_title;
    NSURL *_imageURL;
    UIColor *_accentColor;
    SPTHomeMixDomainMediator *_domainMediator;
    UIColor *_primaryColor;
    NSString *_madeForName;
    SPTHomeMixDomainModel *_domainModel;
}

@property(copy, nonatomic) SPTHomeMixDomainModel *domainModel; // @synthesize domainModel=_domainModel;
@property(copy, nonatomic) NSString *madeForName; // @synthesize madeForName=_madeForName;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, nonatomic) SPTHomeMixDomainMediator *domainMediator; // @synthesize domainMediator=_domainMediator;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(nonatomic) __weak id <SPTHomeMixHeaderViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isUpbeatButtonSelected) _Bool upbeatButtonSelected;
@property(readonly, nonatomic, getter=isChillButtonSelected) _Bool chillButtonSelected;
@property(readonly, nonatomic, getter=shouldDisableTuneButtons) _Bool disableTuneButtons;
@property(readonly, nonatomic) unsigned long long displayMode;
@property(readonly, copy, nonatomic) NSString *subtitle;
- (_Bool)isActionButtonMediaAccessibilityRequired;
@property(readonly, nonatomic, getter=isActionButtonSelected) _Bool actionButtonSelected;
- (void)headerUpbeatButtonTapped;
- (void)headerChillButtonTapped;
- (void)headerJoinButtonTapped;
- (void)headerStartTOButtonTapped;
- (void)headerPlayButtonTapped;
- (void)homeMixDomainMediator:(id)arg1 didUpdateDomainModel:(id)arg2;
- (id)initWithDomainMediator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

