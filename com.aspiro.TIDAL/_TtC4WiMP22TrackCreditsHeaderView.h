//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView, _TtC4WiMP14ReactiveButton;

@interface _TtC4WiMP22TrackCreditsHeaderView : UITableViewHeaderFooterView
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: artistLabel
    // Error parsing type: , name: numberLabel
    // Error parsing type: , name: videoIcon
    // Error parsing type: , name: editedIcon
    // Error parsing type: , name: explicitIcon
    // Error parsing type: , name: contextMenuButton
    // Error parsing type: , name: subtitleLeftToVideoIconConstraint
    // Error parsing type: , name: subtitleLeftToEditedIconConstraint
    // Error parsing type: , name: separatorView
    // Error parsing type: , name: didTapCallback
    // Error parsing type: , name: playbackObserver
    // Error parsing type: , name: itemIdentifier
}

+ (id)nib;
+ (id)cellIdentifier;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)didTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView;
@property(nonatomic, retain) NSLayoutConstraint *subtitleLeftToEditedIconConstraint; // @synthesize subtitleLeftToEditedIconConstraint;
@property(nonatomic, retain) NSLayoutConstraint *subtitleLeftToVideoIconConstraint; // @synthesize subtitleLeftToVideoIconConstraint;
@property(nonatomic, retain) _TtC4WiMP14ReactiveButton *contextMenuButton; // @synthesize contextMenuButton;
@property(nonatomic, retain) UIImageView *explicitIcon; // @synthesize explicitIcon;
@property(nonatomic, retain) UIImageView *editedIcon; // @synthesize editedIcon;
@property(nonatomic, retain) UIImageView *videoIcon; // @synthesize videoIcon;
@property(nonatomic, retain) UILabel *numberLabel; // @synthesize numberLabel;
@property(nonatomic, retain) UILabel *artistLabel; // @synthesize artistLabel;
@property(nonatomic, retain) UILabel *titleLabel; // @synthesize titleLabel;

@end

