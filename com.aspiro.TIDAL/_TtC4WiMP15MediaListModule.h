//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, WMPReorderTableView, WMPTitleModule;

@interface _TtC4WiMP15MediaListModule : UIViewController
{
    // Error parsing type: , name: eventMetadata
    // Error parsing type: , name: itemId
    // Error parsing type: , name: playQueuePreparator
    // Error parsing type: , name: noContentView
    // Error parsing type: , name: mediaProvider
    // Error parsing type: , name: tracks
    // Error parsing type: , name: titleModule
    // Error parsing type: , name: trackListModuleFormat
    // Error parsing type: , name: isFullScreen
    // Error parsing type: , name: isSupportingVolumes
    // Error parsing type: , name: tableConfigurer.storage
    // Error parsing type: , name: tableView.storage
    // Error parsing type: , name: loadingView.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) WMPReorderTableView *tableView;
@property(nonatomic) _Bool isSupportingVolumes; // @synthesize isSupportingVolumes;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen;
@property(nonatomic, readonly) long long trackListModuleFormat; // @synthesize trackListModuleFormat;
@property(nonatomic, retain) WMPTitleModule *titleModule; // @synthesize titleModule;
- (void)refreshData;
@property(nonatomic) double heightConstraint;
@property(nonatomic, copy) id itemId; // @synthesize itemId;
@property(nonatomic, copy) NSDictionary *eventMetadata; // @synthesize eventMetadata;

@end

