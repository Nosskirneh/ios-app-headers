//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Deezer21MSISDNActivationBlock.h"

@class DZRErrorButton, NSArray, NSLayoutConstraint, UIButton;

@interface _TtC6Deezer25MSISDNActivationCodeBlock : _TtC6Deezer21MSISDNActivationBlock
{
    // Error parsing type: , name: activityIndicatorsView
    // Error parsing type: , name: placeholderLabelsCollection
    // Error parsing type: , name: textfieldsCollection
    // Error parsing type: , name: activationCodeButton
    // Error parsing type: , name: errorButton
    // Error parsing type: , name: textfieldsCollectionBottomLayoutConstraint
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)activationCodeButtonWasPressed:(id)arg1;
- (void)errorButtonWasPressed:(id)arg1;
- (void)stopEditingFields:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *textfieldsCollectionBottomLayoutConstraint; // @synthesize textfieldsCollectionBottomLayoutConstraint;
@property(nonatomic) __weak DZRErrorButton *errorButton; // @synthesize errorButton;
@property(nonatomic) __weak UIButton *activationCodeButton; // @synthesize activationCodeButton;
@property(nonatomic, copy) NSArray *textfieldsCollection; // @synthesize textfieldsCollection;
@property(nonatomic, copy) NSArray *placeholderLabelsCollection; // @synthesize placeholderLabelsCollection;
@property(nonatomic, copy) NSArray *activityIndicatorsView; // @synthesize activityIndicatorsView;

@end

