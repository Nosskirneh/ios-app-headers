//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSBaseResponseObject.h"

@class NSString, SSProductRight;

@interface SSPurchaseInfo : SSBaseResponseObject
{
    NSString *_purchaseId;
    SSProductRight *_productRight;
}

+ (id)infoWithJSON:(id)arg1;
@property(retain, nonatomic) SSProductRight *productRight; // @synthesize productRight=_productRight;
@property(retain, nonatomic) NSString *purchaseId; // @synthesize purchaseId=_purchaseId;
- (void).cxx_destruct;
- (id)initInternal;

@end

