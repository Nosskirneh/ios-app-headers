//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (GPMStreamRejectedErrorCode)
+ (id)gpm_rejectionErrorWithReason:(id)arg1;
+ (id)gpm_rejectionErrorWithCode:(long long)arg1 detailReason:(id)arg2;
- (_Bool)gpm_isTrackSpecificRejectionError;
- (_Bool)gpm_isWoodstockRejectionError;
@end

