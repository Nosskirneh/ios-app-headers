//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DZREdgeInsetsLabel, UIButton, UILabel;
@protocol DZRCarModeBannerActing;

@interface DZRCarModeBannerView : UIView
{
    id <DZRCarModeBannerActing> _delegate;
    UILabel *_availabilityLabel;
    DZREdgeInsetsLabel *_discoverLabel;
    UIButton *_discoverButton;
    UIButton *_dismissButton;
}

@property(nonatomic) __weak UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak UIButton *discoverButton; // @synthesize discoverButton=_discoverButton;
@property(nonatomic) __weak DZREdgeInsetsLabel *discoverLabel; // @synthesize discoverLabel=_discoverLabel;
@property(nonatomic) __weak UILabel *availabilityLabel; // @synthesize availabilityLabel=_availabilityLabel;
@property(nonatomic) __weak id <DZRCarModeBannerActing> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeButtonsActions;
- (void)addButtonsActions;
- (void)awakeFromNib;

@end

