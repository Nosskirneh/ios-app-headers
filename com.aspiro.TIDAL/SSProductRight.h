//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSBaseResponseObject.h"

@class NSString;

@interface SSProductRight : SSBaseResponseObject
{
    NSString *_contentType;
    NSString *_expirationDate;
    NSString *_productRightId;
    NSString *_lastDownloadDate;
    NSString *_licenseId;
    NSString *_productId;
    NSString *_productName;
    NSString *_purchaseDate;
    NSString *_purchasePrice;
    NSString *_vaultPath;
}

+ (id)rightWithJSON:(id)arg1;
@property(retain, nonatomic) NSString *vaultPath; // @synthesize vaultPath=_vaultPath;
@property(retain, nonatomic) NSString *purchasePrice; // @synthesize purchasePrice=_purchasePrice;
@property(retain, nonatomic) NSString *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *licenseId; // @synthesize licenseId=_licenseId;
@property(retain, nonatomic) NSString *lastDownloadDate; // @synthesize lastDownloadDate=_lastDownloadDate;
@property(retain, nonatomic) NSString *productRightId; // @synthesize productRightId=_productRightId;
@property(retain, nonatomic) NSString *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)initInternal;

@end

