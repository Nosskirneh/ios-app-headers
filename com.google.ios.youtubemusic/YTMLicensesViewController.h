//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OSSLicensesViewController.h"

#import "OSSLicensesViewControllerDelegate-Protocol.h"

@interface YTMLicensesViewController : OSSLicensesViewController <OSSLicensesViewControllerDelegate>
{
}

- (void)navigateToViewController:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

