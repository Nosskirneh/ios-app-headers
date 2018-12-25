//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCDRPCTransportOperation-Protocol.h"

@class FCDRPCRequest;
@protocol FCDBoqDataTransportOperationDelegate, FCDRPCTransportOperation, GSCAccountId;

@interface FCDBoqDataTransportOperation : NSObject <FCDRPCTransportOperation>
{
    _Bool _started;
    _Bool _cancelled;
    FCDRPCRequest *_request;
    id <GSCAccountId> _accountID;
    id <FCDBoqDataTransportOperationDelegate> _delegate;
    id <FCDRPCTransportOperation> _gtmTransportOperation;
}

@property(retain, nonatomic) id <FCDRPCTransportOperation> gtmTransportOperation; // @synthesize gtmTransportOperation=_gtmTransportOperation;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property _Bool started; // @synthesize started=_started;
@property(readonly, nonatomic) id <FCDBoqDataTransportOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <GSCAccountId> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) FCDRPCRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)responseMessageWithExtensionClass:(Class)arg1 fromMessage:(id)arg2;
- (id)rpcResponseFromDataResponse:(id)arg1 withHeaders:(id)arg2 requestClass:(Class)arg3 responseClass:(Class)arg4;
- (id)headerForRequest:(id)arg1 context:(id)arg2;
- (id)errorWithResponseErrorStatus:(id)arg1;
- (id)parseMutateResponse:(id)arg1 responseClass:(Class)arg2 requestClass:(Class)arg3;
- (id)mutateRequestForRequest:(id)arg1 context:(id)arg2;
- (id)parseFetchResponse:(id)arg1 responseClass:(Class)arg2 requestClass:(Class)arg3;
- (id)fetchRequestForRequest:(id)arg1 context:(id)arg2;
- (id)extensionForClass:(Class)arg1;
- (void)cancelRequest;
- (void)respondToRequestWithError:(id)arg1;
- (void)cancel;
- (void)startWithContext:(id)arg1;
- (id)initWithAccountID:(id)arg1 request:(id)arg2 delegate:(id)arg3;

@end

