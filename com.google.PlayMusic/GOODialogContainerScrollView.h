//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class GOODialogView;

@interface GOODialogContainerScrollView : UIScrollView
{
    GOODialogView *_dialogView;
}

@property(retain, nonatomic) GOODialogView *dialogView; // @synthesize dialogView=_dialogView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dialogView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

