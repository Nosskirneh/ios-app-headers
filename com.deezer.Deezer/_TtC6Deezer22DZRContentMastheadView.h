//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _TtC6Deezer22DZRContentMastheadView : UIView
{
    // Error parsing type: , name: composer
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleButton
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: pageControl
    // Error parsing type: , name: coloredLayer
    // Error parsing type: , name: data
    // Error parsing type: , name: previousSize
    // Error parsing type: , name: mainImage
    // Error parsing type: , name: attachedView
    // Error parsing type: , name: contentOffset
    // Error parsing type: , name: pageChangedCallback
    // Error parsing type: , name: navigationBarPadding
}

+ (struct CGSize)sizeWith:(id)arg1 size:(struct CGSize)arg2;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)createPageControl;
- (void)imageDownloadedWithImage:(id)arg1 identifier:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeWith:(struct CGSize)arg1;
- (void)buttonClicked:(id)arg1;
- (void)populateWith:(id)arg1;
@property(nonatomic) double navigationBarPadding; // @synthesize navigationBarPadding;
@property(nonatomic, copy) CDUnknownBlockType pageChangedCallback; // @synthesize pageChangedCallback;
@property(nonatomic) double contentOffset; // @synthesize contentOffset;
@property(nonatomic) __weak UIView *attachedView; // @synthesize attachedView;

@end
