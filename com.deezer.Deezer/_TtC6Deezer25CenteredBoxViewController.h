//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Deezer27CustoTemplateViewController.h"

@class DZFlatButton, NSLayoutConstraint, UIButton, UIImageView, UILabel, _TtC6Deezer9CustoItem;

@interface _TtC6Deezer25CenteredBoxViewController : _TtC6Deezer27CustoTemplateViewController
{
    // Error parsing type: , name: model
    // Error parsing type: , name: imageView
    // Error parsing type: , name: subscribeButton
    // Error parsing type: , name: whatIfButton
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: eventConditionButton
    // Error parsing type: , name: subscribeConditionVerticalSpacingConstraint
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapClose;
- (void)didTapSubscribe;
- (void)didTapEventCondition:(id)arg1;
- (void)updateImageWith:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *subscribeConditionVerticalSpacingConstraint; // @synthesize subscribeConditionVerticalSpacingConstraint;
@property(nonatomic) __weak UIButton *eventConditionButton; // @synthesize eventConditionButton;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIButton *whatIfButton; // @synthesize whatIfButton;
@property(nonatomic) __weak DZFlatButton *subscribeButton; // @synthesize subscribeButton;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView;
@property(nonatomic, retain) _TtC6Deezer9CustoItem *model; // @synthesize model;

@end

