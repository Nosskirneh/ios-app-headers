//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ActivityButton, CarouselView, OBGradientView, UIPageControl, UITextView;

@interface _TtC10SoundCloud19PlanPickerPresenter : NSObject
{
    // Error parsing type: , name: upsellManager
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: gradientView
    // Error parsing type: , name: pageControl
    // Error parsing type: , name: purchaseButton
    // Error parsing type: , name: termsTextView
    // Error parsing type: , name: goTermsTextViewPresenter
    // Error parsing type: , name: pageOrder
    // Error parsing type: , name: cellPresenters
}

- (CDUnknownBlockType).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)init;
@property(nonatomic, retain) UITextView *termsTextView; // @synthesize termsTextView;
@property(nonatomic, retain) ActivityButton *purchaseButton; // @synthesize purchaseButton;
@property(nonatomic, retain) UIPageControl *pageControl; // @synthesize pageControl;
@property(nonatomic, retain) OBGradientView *gradientView; // @synthesize gradientView;
@property(nonatomic, retain) CarouselView *collectionView; // @synthesize collectionView;

@end

