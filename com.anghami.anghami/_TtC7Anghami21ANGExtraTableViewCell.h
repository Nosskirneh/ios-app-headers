//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, UIView;
@protocol ANGHomeButtonCellDelegate;

@interface _TtC7Anghami21ANGExtraTableViewCell : UITableViewCell
{
    // Error parsing type: , name: mainLabel
    // Error parsing type: , name: mainButton
    // Error parsing type: , name: innerView
    // Error parsing type: , name: mainImageView
    // Error parsing type: , name: deeplinkUrl
    // Error parsing type: , name: delegate
    // Error parsing type: , name: gradientLayer
    // Error parsing type: , name: imageContainerWidthConstraint
    // Error parsing type: , name: mainColor
    // Error parsing type: , name: mainImage
    // Error parsing type: , name: mainColorsGradient
}

+ (id)kReuseIdentifier;
+ (long long)getPreferredHeight;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)buttonActionWithSender:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;
@property(nonatomic, retain) UIImage *mainImage; // @synthesize mainImage;
@property(nonatomic, retain) UIColor *mainColor; // @synthesize mainColor;
@property(nonatomic) __weak NSLayoutConstraint *imageContainerWidthConstraint; // @synthesize imageContainerWidthConstraint;
@property(nonatomic, retain) id <ANGHomeButtonCellDelegate> delegate; // @synthesize delegate;
@property(nonatomic, copy) NSString *deeplinkUrl; // @synthesize deeplinkUrl;
@property(nonatomic) __weak UIImageView *mainImageView; // @synthesize mainImageView;
@property(nonatomic) __weak UIView *innerView; // @synthesize innerView;
@property(nonatomic) __weak UIButton *mainButton; // @synthesize mainButton;
@property(nonatomic) __weak UILabel *mainLabel; // @synthesize mainLabel;

@end

