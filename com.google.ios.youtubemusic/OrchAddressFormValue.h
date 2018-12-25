//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, PostalAddress;

@interface OrchAddressFormValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalFieldsArray; // @dynamic additionalFieldsArray;
@property(readonly, nonatomic) unsigned long long additionalFieldsArray_Count; // @dynamic additionalFieldsArray_Count;
@property(retain, nonatomic) PostalAddress *address; // @dynamic address;
@property(nonatomic) long long addressId; // @dynamic addressId;
@property(nonatomic) int addressType; // @dynamic addressType;
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(copy, nonatomic) NSData *existingAddressToken; // @dynamic existingAddressToken;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasAddressId; // @dynamic hasAddressId;
@property(nonatomic) _Bool hasAddressType; // @dynamic hasAddressType;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(nonatomic) _Bool hasExistingAddressToken; // @dynamic hasExistingAddressToken;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasIsHidden; // @dynamic hasIsHidden;
@property(nonatomic) _Bool hasPhoneNumber; // @dynamic hasPhoneNumber;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool isHidden; // @dynamic isHidden;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

