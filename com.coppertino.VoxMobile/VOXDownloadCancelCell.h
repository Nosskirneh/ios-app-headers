//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton;

@interface VOXDownloadCancelCell : UITableViewCell
{
    UIButton *_cancelAllButton;
    CDUnknownBlockType _actionBlock;
}

+ (id)reuseIdentifier;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) __weak UIButton *cancelAllButton; // @synthesize cancelAllButton=_cancelAllButton;
- (void).cxx_destruct;
- (void)action:(id)arg1;

@end

