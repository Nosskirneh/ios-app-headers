//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface _TtC4WiMP28DownloadProgressButtonModule : UIViewController
{
    // Error parsing type: , name: canCollapse
    // Error parsing type: , name: itemId
    // Error parsing type: , name: moduleInsets
    // Error parsing type: , name: progressView.storage
    // Error parsing type: , name: downloadProgressLabel.storage
    // Error parsing type: , name: showMoreIcon.storage
    // Error parsing type: , name: progressStackView.storage
    // Error parsing type: , name: horizontalStackView.storage
    // Error parsing type: , name: isHidden
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden;
@property(nonatomic) struct UIEdgeInsets moduleInsets; // @synthesize moduleInsets;
- (void)refreshData;
@property(nonatomic) double heightConstraint;
@property(nonatomic, copy) id itemId; // @synthesize itemId;
@property(nonatomic) _Bool canCollapse; // @synthesize canCollapse;

@end
