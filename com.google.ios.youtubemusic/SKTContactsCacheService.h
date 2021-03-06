//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GSCAddressBookService, PDLPeopleDataService;

@interface SKTContactsCacheService : NSObject
{
    int _clientId;
    id <GSCAddressBookService> _addressBookService;
    id <PDLPeopleDataService> _peopleDataService;
}

@property(readonly, nonatomic) int clientId; // @synthesize clientId=_clientId;
@property(readonly, nonatomic) id <PDLPeopleDataService> peopleDataService; // @synthesize peopleDataService=_peopleDataService;
@property(readonly, nonatomic) id <GSCAddressBookService> addressBookService; // @synthesize addressBookService=_addressBookService;
- (void).cxx_destruct;
- (id)warmUpContactsCacheWithForceUpdate:(_Bool)arg1;
- (id)initWithClientId:(int)arg1 addressBookService:(id)arg2 peopleDataService:(id)arg3;

@end

