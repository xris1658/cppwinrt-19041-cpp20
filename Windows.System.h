// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_H
#define WINRT_Windows_System_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Search.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.Diagnostics.2.h"
#include "winrt/impl/Windows.System.RemoteSystems.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.UI.ViewManagement.2.h"
#include "winrt/impl/Windows.System.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_System_IAppActivationResult<D>::ExtendedError() const
    {
        winrt::hresult value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppActivationResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppActivationResult<D>::AppResourceGroupInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppActivationResult)->get_AppResourceGroupInfo(&value));
        return Windows::System::AppResourceGroupInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfo<D>::AppInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfo)->get_AppInfo(&value));
        return Windows::ApplicationModel::AppInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfo2<D>::GetResourceGroups() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfo2)->GetResourceGroups(&result));
        return Windows::Foundation::Collections::IVector<Windows::System::AppResourceGroupInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfo2<D>::CreateResourceGroupWatcher() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfo2)->CreateResourceGroupWatcher(&result));
        return Windows::System::AppResourceGroupInfoWatcher{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfo3<D>::LaunchAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfo3)->LaunchAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::AppActivationResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoStatics<D>::RequestInfoAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoStatics)->RequestInfoAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoStatics2<D>::CreateWatcher() const
    {
        void* watcher{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoStatics2)->CreateWatcher(&watcher));
        return Windows::System::AppDiagnosticInfoWatcher{ watcher, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoStatics2<D>::RequestAccessAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoStatics2)->RequestAccessAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::DiagnosticAccessStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoStatics2<D>::RequestInfoForPackageAsync(param::hstring const& packageFamilyName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoStatics2)->RequestInfoForPackageAsync(*(void**)(&packageFamilyName), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoStatics2<D>::RequestInfoForAppAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoStatics2)->RequestInfoForAppAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoStatics2<D>::RequestInfoForAppAsync(param::hstring const& appUserModelId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoStatics2)->RequestInfoForAppUserModelId(*(void**)(&appUserModelId), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->add_Added(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Added_revoker consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Added_revoker>(this, Added(handler));
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Added(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->remove_Added(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->add_Removed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Removed_revoker consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Removed_revoker>(this, Removed(handler));
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Removed(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->remove_Removed(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->add_EnumerationCompleted(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IAppDiagnosticInfoWatcher<D>::EnumerationCompleted_revoker consume_Windows_System_IAppDiagnosticInfoWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, EnumerationCompleted_revoker>(this, EnumerationCompleted(handler));
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::EnumerationCompleted(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->remove_EnumerationCompleted(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->add_Stopped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Stopped_revoker consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Stopped_revoker>(this, Stopped(handler));
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Stopped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->remove_Stopped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Status() const
    {
        Windows::System::AppDiagnosticInfoWatcherStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->Start());
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcher<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcher)->Stop());
    }
    template <typename D> auto consume_Windows_System_IAppDiagnosticInfoWatcherEventArgs<D>::AppDiagnosticInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppDiagnosticInfoWatcherEventArgs)->get_AppDiagnosticInfo(&value));
        return Windows::System::AppDiagnosticInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppExecutionStateChangeResult<D>::ExtendedError() const
    {
        winrt::hresult value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppExecutionStateChangeResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppMemoryReport<D>::PrivateCommitUsage() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppMemoryReport)->get_PrivateCommitUsage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppMemoryReport<D>::PeakPrivateCommitUsage() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppMemoryReport)->get_PeakPrivateCommitUsage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppMemoryReport<D>::TotalCommitUsage() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppMemoryReport)->get_TotalCommitUsage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppMemoryReport<D>::TotalCommitLimit() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppMemoryReport)->get_TotalCommitLimit(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppMemoryReport2<D>::ExpectedTotalCommitLimit() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppMemoryReport2)->get_ExpectedTotalCommitLimit(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppMemoryUsageLimitChangingEventArgs<D>::OldLimit() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppMemoryUsageLimitChangingEventArgs)->get_OldLimit(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppMemoryUsageLimitChangingEventArgs<D>::NewLimit() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppMemoryUsageLimitChangingEventArgs)->get_NewLimit(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupBackgroundTaskReport<D>::TaskId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupBackgroundTaskReport)->get_TaskId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupBackgroundTaskReport<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupBackgroundTaskReport)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupBackgroundTaskReport<D>::Trigger() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupBackgroundTaskReport)->get_Trigger(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupBackgroundTaskReport<D>::EntryPoint() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupBackgroundTaskReport)->get_EntryPoint(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfo<D>::InstanceId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfo)->get_InstanceId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfo<D>::IsShared() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfo)->get_IsShared(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfo<D>::GetBackgroundTaskReports() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfo)->GetBackgroundTaskReports(&result));
        return Windows::Foundation::Collections::IVector<Windows::System::AppResourceGroupBackgroundTaskReport>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfo<D>::GetMemoryReport() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfo)->GetMemoryReport(&result));
        return Windows::System::AppResourceGroupMemoryReport{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfo<D>::GetProcessDiagnosticInfos() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfo)->GetProcessDiagnosticInfos(&result));
        return Windows::Foundation::Collections::IVector<Windows::System::Diagnostics::ProcessDiagnosticInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfo<D>::GetStateReport() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfo)->GetStateReport(&result));
        return Windows::System::AppResourceGroupStateReport{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfo2<D>::StartSuspendAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfo2)->StartSuspendAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::AppExecutionStateChangeResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfo2<D>::StartResumeAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfo2)->StartResumeAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::AppExecutionStateChangeResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfo2<D>::StartTerminateAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfo2)->StartTerminateAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::AppExecutionStateChangeResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->add_Added(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Added_revoker consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Added_revoker>(this, Added(handler));
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Added(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->remove_Added(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->add_Removed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Removed_revoker consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Removed_revoker>(this, Removed(handler));
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Removed(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->remove_Removed(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->add_EnumerationCompleted(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IAppResourceGroupInfoWatcher<D>::EnumerationCompleted_revoker consume_Windows_System_IAppResourceGroupInfoWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, EnumerationCompleted_revoker>(this, EnumerationCompleted(handler));
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::EnumerationCompleted(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->remove_EnumerationCompleted(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->add_Stopped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Stopped_revoker consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Stopped_revoker>(this, Stopped(handler));
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Stopped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->remove_Stopped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::ExecutionStateChanged(Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->add_ExecutionStateChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IAppResourceGroupInfoWatcher<D>::ExecutionStateChanged_revoker consume_Windows_System_IAppResourceGroupInfoWatcher<D>::ExecutionStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ExecutionStateChanged_revoker>(this, ExecutionStateChanged(handler));
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::ExecutionStateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->remove_ExecutionStateChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Status() const
    {
        Windows::System::AppResourceGroupInfoWatcherStatus status;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->get_Status(put_abi(status)));
        return status;
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->Start());
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcher<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcher)->Stop());
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcherEventArgs<D>::AppDiagnosticInfos() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcherEventArgs)->get_AppDiagnosticInfos(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::System::AppDiagnosticInfo>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcherEventArgs<D>::AppResourceGroupInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcherEventArgs)->get_AppResourceGroupInfo(&value));
        return Windows::System::AppResourceGroupInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs<D>::AppDiagnosticInfos() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs)->get_AppDiagnosticInfos(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::System::AppDiagnosticInfo>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs<D>::AppResourceGroupInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs)->get_AppResourceGroupInfo(&value));
        return Windows::System::AppResourceGroupInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupMemoryReport<D>::CommitUsageLimit() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupMemoryReport)->get_CommitUsageLimit(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupMemoryReport<D>::CommitUsageLevel() const
    {
        Windows::System::AppMemoryUsageLevel value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupMemoryReport)->get_CommitUsageLevel(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupMemoryReport<D>::PrivateCommitUsage() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupMemoryReport)->get_PrivateCommitUsage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupMemoryReport<D>::TotalCommitUsage() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupMemoryReport)->get_TotalCommitUsage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupStateReport<D>::ExecutionState() const
    {
        Windows::System::AppResourceGroupExecutionState value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupStateReport)->get_ExecutionState(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppResourceGroupStateReport<D>::EnergyQuotaState() const
    {
        Windows::System::AppResourceGroupEnergyQuotaState value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppResourceGroupStateReport)->get_EnergyQuotaState(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerHost<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerHost)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerHost<D>::Name(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerHost)->put_Name(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerHostFactory<D>::CreateInstance(param::hstring const& name) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerHostFactory)->CreateInstance(*(void**)(&name), &value));
        return Windows::System::AppUriHandlerHost{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerRegistration<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerRegistration)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerRegistration<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerRegistration)->get_User(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerRegistration<D>::GetAppAddedHostsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerRegistration)->GetAppAddedHostsAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppUriHandlerHost>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerRegistration<D>::SetAppAddedHostsAsync(param::async_iterable<Windows::System::AppUriHandlerHost> const& hosts) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerRegistration)->SetAppAddedHostsAsync(*(void**)(&hosts), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerRegistrationManager<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerRegistrationManager)->get_User(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerRegistrationManager<D>::TryGetRegistration(param::hstring const& name) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerRegistrationManager)->TryGetRegistration(*(void**)(&name), &result));
        return Windows::System::AppUriHandlerRegistration{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerRegistrationManagerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerRegistrationManagerStatics)->GetDefault(&result));
        return Windows::System::AppUriHandlerRegistrationManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IAppUriHandlerRegistrationManagerStatics<D>::GetForUser(Windows::System::User const& user) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IAppUriHandlerRegistrationManagerStatics)->GetForUser(*(void**)(&user), &result));
        return Windows::System::AppUriHandlerRegistrationManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IDateTimeSettingsStatics<D>::SetSystemDateTime(Windows::Foundation::DateTime const& utcDateTime) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDateTimeSettingsStatics)->SetSystemDateTime(impl::bind_in(utcDateTime)));
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueue<D>::CreateTimer() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueue)->CreateTimer(&result));
        return Windows::System::DispatcherQueueTimer{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueue<D>::TryEnqueue(Windows::System::DispatcherQueueHandler const& callback) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueue)->TryEnqueue(*(void**)(&callback), &result));
        return result;
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueue<D>::TryEnqueue(Windows::System::DispatcherQueuePriority const& priority, Windows::System::DispatcherQueueHandler const& callback) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueue)->TryEnqueueWithPriority(static_cast<int32_t>(priority), *(void**)(&callback), &result));
        return result;
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueue<D>::ShutdownStarting(Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::System::DispatcherQueueShutdownStartingEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueue)->add_ShutdownStarting(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IDispatcherQueue<D>::ShutdownStarting_revoker consume_Windows_System_IDispatcherQueue<D>::ShutdownStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::System::DispatcherQueueShutdownStartingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ShutdownStarting_revoker>(this, ShutdownStarting(handler));
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueue<D>::ShutdownStarting(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IDispatcherQueue)->remove_ShutdownStarting(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueue<D>::ShutdownCompleted(Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueue)->add_ShutdownCompleted(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IDispatcherQueue<D>::ShutdownCompleted_revoker consume_Windows_System_IDispatcherQueue<D>::ShutdownCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, ShutdownCompleted_revoker>(this, ShutdownCompleted(handler));
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueue<D>::ShutdownCompleted(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IDispatcherQueue)->remove_ShutdownCompleted(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueue2<D>::HasThreadAccess() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueue2)->get_HasThreadAccess(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueController<D>::DispatcherQueue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueController)->get_DispatcherQueue(&value));
        return Windows::System::DispatcherQueue{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueController<D>::ShutdownQueueAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueController)->ShutdownQueueAsync(&operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueControllerStatics<D>::CreateOnDedicatedThread() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueControllerStatics)->CreateOnDedicatedThread(&result));
        return Windows::System::DispatcherQueueController{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueShutdownStartingEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueShutdownStartingEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueStatics<D>::GetForCurrentThread() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueStatics)->GetForCurrentThread(&result));
        return Windows::System::DispatcherQueue{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueTimer<D>::Interval() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueTimer)->get_Interval(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueTimer<D>::Interval(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueTimer)->put_Interval(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueTimer<D>::IsRunning() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueTimer)->get_IsRunning(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueTimer<D>::IsRepeating() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueTimer)->get_IsRepeating(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueTimer<D>::IsRepeating(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueTimer)->put_IsRepeating(value));
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueTimer<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueTimer)->Start());
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueTimer<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueTimer)->Stop());
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueTimer<D>::Tick(Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueueTimer, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueTimer)->add_Tick(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IDispatcherQueueTimer<D>::Tick_revoker consume_Windows_System_IDispatcherQueueTimer<D>::Tick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueueTimer, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Tick_revoker>(this, Tick(handler));
    }
    template <typename D> auto consume_Windows_System_IDispatcherQueueTimer<D>::Tick(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IDispatcherQueueTimer)->remove_Tick(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IFolderLauncherOptions<D>::ItemsToSelect() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IFolderLauncherOptions)->get_ItemsToSelect(&value));
        return Windows::Foundation::Collections::IVector<Windows::Storage::IStorageItem>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IKnownUserPropertiesStatics<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IKnownUserPropertiesStatics<D>::FirstName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_FirstName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IKnownUserPropertiesStatics<D>::LastName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_LastName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IKnownUserPropertiesStatics<D>::ProviderName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_ProviderName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IKnownUserPropertiesStatics<D>::AccountName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_AccountName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IKnownUserPropertiesStatics<D>::GuestHost() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_GuestHost(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IKnownUserPropertiesStatics<D>::PrincipalName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_PrincipalName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IKnownUserPropertiesStatics<D>::DomainName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_DomainName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IKnownUserPropertiesStatics<D>::SessionInitiationProtocolUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IKnownUserPropertiesStatics)->get_SessionInitiationProtocolUri(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILaunchUriResult<D>::Status() const
    {
        Windows::System::LaunchUriStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILaunchUriResult)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_ILaunchUriResult<D>::Result() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILaunchUriResult)->get_Result(&value));
        return Windows::Foundation::Collections::ValueSet{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::TreatAsUntrusted() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->get_TreatAsUntrusted(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::TreatAsUntrusted(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->put_TreatAsUntrusted(value));
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::DisplayApplicationPicker() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->get_DisplayApplicationPicker(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::DisplayApplicationPicker(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->put_DisplayApplicationPicker(value));
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::UI() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->get_UI(&value));
        return Windows::System::LauncherUIOptions{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::PreferredApplicationPackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->get_PreferredApplicationPackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::PreferredApplicationPackageFamilyName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->put_PreferredApplicationPackageFamilyName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::PreferredApplicationDisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->get_PreferredApplicationDisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::PreferredApplicationDisplayName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->put_PreferredApplicationDisplayName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::FallbackUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->get_FallbackUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::FallbackUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->put_FallbackUri(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::ContentType() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->get_ContentType(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions<D>::ContentType(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions)->put_ContentType(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions2<D>::TargetApplicationPackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions2)->get_TargetApplicationPackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions2<D>::TargetApplicationPackageFamilyName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions2)->put_TargetApplicationPackageFamilyName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions2<D>::NeighboringFilesQuery() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions2)->get_NeighboringFilesQuery(&value));
        return Windows::Storage::Search::StorageFileQueryResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions2<D>::NeighboringFilesQuery(Windows::Storage::Search::StorageFileQueryResult const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions2)->put_NeighboringFilesQuery(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions3<D>::IgnoreAppUriHandlers() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions3)->get_IgnoreAppUriHandlers(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions3<D>::IgnoreAppUriHandlers(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions3)->put_IgnoreAppUriHandlers(value));
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions4<D>::LimitPickerToCurrentAppAndAppUriHandlers() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions4)->get_LimitPickerToCurrentAppAndAppUriHandlers(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_ILauncherOptions4<D>::LimitPickerToCurrentAppAndAppUriHandlers(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherOptions4)->put_LimitPickerToCurrentAppAndAppUriHandlers(value));
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics<D>::LaunchFileAsync(Windows::Storage::IStorageFile const& file) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics)->LaunchFileAsync(*(void**)(&file), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics<D>::LaunchFileAsync(Windows::Storage::IStorageFile const& file, Windows::System::LauncherOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics)->LaunchFileWithOptionsAsync(*(void**)(&file), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics<D>::LaunchUriAsync(Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics)->LaunchUriAsync(*(void**)(&uri), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics<D>::LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics)->LaunchUriWithOptionsAsync(*(void**)(&uri), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics2<D>::LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics2)->LaunchUriForResultsAsync(*(void**)(&uri), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics2<D>::LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics2)->LaunchUriForResultsWithDataAsync(*(void**)(&uri), *(void**)(&options), *(void**)(&inputData), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics2<D>::LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics2)->LaunchUriWithDataAsync(*(void**)(&uri), *(void**)(&options), *(void**)(&inputData), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics2<D>::QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics2)->QueryUriSupportAsync(*(void**)(&uri), static_cast<int32_t>(launchQuerySupportType), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics2<D>::QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType, param::hstring const& packageFamilyName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics2)->QueryUriSupportWithPackageFamilyNameAsync(*(void**)(&uri), static_cast<int32_t>(launchQuerySupportType), *(void**)(&packageFamilyName), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics2<D>::QueryFileSupportAsync(Windows::Storage::StorageFile const& file) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics2)->QueryFileSupportAsync(*(void**)(&file), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics2<D>::QueryFileSupportAsync(Windows::Storage::StorageFile const& file, param::hstring const& packageFamilyName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics2)->QueryFileSupportWithPackageFamilyNameAsync(*(void**)(&file), *(void**)(&packageFamilyName), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics2<D>::FindUriSchemeHandlersAsync(param::hstring const& scheme) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics2)->FindUriSchemeHandlersAsync(*(void**)(&scheme), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics2<D>::FindUriSchemeHandlersAsync(param::hstring const& scheme, Windows::System::LaunchQuerySupportType const& launchQuerySupportType) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics2)->FindUriSchemeHandlersWithLaunchUriTypeAsync(*(void**)(&scheme), static_cast<int32_t>(launchQuerySupportType), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics2<D>::FindFileHandlersAsync(param::hstring const& extension) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics2)->FindFileHandlersAsync(*(void**)(&extension), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics3<D>::LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics3)->LaunchFolderAsync(*(void**)(&folder), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics3<D>::LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder, Windows::System::FolderLauncherOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics3)->LaunchFolderWithOptionsAsync(*(void**)(&folder), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics4<D>::QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics4)->QueryAppUriSupportAsync(*(void**)(&uri), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics4<D>::QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri, param::hstring const& packageFamilyName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics4)->QueryAppUriSupportWithPackageFamilyNameAsync(*(void**)(&uri), *(void**)(&packageFamilyName), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics4<D>::FindAppUriHandlersAsync(Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics4)->FindAppUriHandlersAsync(*(void**)(&uri), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics4<D>::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics4)->LaunchUriForUserAsync(*(void**)(&user), *(void**)(&uri), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics4<D>::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics4)->LaunchUriWithOptionsForUserAsync(*(void**)(&user), *(void**)(&uri), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics4<D>::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics4)->LaunchUriWithDataForUserAsync(*(void**)(&user), *(void**)(&uri), *(void**)(&options), *(void**)(&inputData), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics4<D>::LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics4)->LaunchUriForResultsForUserAsync(*(void**)(&user), *(void**)(&uri), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics4<D>::LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics4)->LaunchUriForResultsWithDataForUserAsync(*(void**)(&user), *(void**)(&uri), *(void**)(&options), *(void**)(&inputData), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics5<D>::LaunchFolderPathAsync(param::hstring const& path) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics5)->LaunchFolderPathAsync(*(void**)(&path), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics5<D>::LaunchFolderPathAsync(param::hstring const& path, Windows::System::FolderLauncherOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics5)->LaunchFolderPathWithOptionsAsync(*(void**)(&path), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics5<D>::LaunchFolderPathForUserAsync(Windows::System::User const& user, param::hstring const& path) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics5)->LaunchFolderPathForUserAsync(*(void**)(&user), *(void**)(&path), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherStatics5<D>::LaunchFolderPathForUserAsync(Windows::System::User const& user, param::hstring const& path, Windows::System::FolderLauncherOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherStatics5)->LaunchFolderPathWithOptionsForUserAsync(*(void**)(&user), *(void**)(&path), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherUIOptions<D>::InvocationPoint() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherUIOptions)->get_InvocationPoint(&value));
        return Windows::Foundation::IReference<Windows::Foundation::Point>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherUIOptions<D>::InvocationPoint(Windows::Foundation::IReference<Windows::Foundation::Point> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherUIOptions)->put_InvocationPoint(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_ILauncherUIOptions<D>::SelectionRect() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherUIOptions)->get_SelectionRect(&value));
        return Windows::Foundation::IReference<Windows::Foundation::Rect>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ILauncherUIOptions<D>::SelectionRect(Windows::Foundation::IReference<Windows::Foundation::Rect> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherUIOptions)->put_SelectionRect(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_ILauncherUIOptions<D>::PreferredPlacement() const
    {
        Windows::UI::Popups::Placement value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherUIOptions)->get_PreferredPlacement(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_ILauncherUIOptions<D>::PreferredPlacement(Windows::UI::Popups::Placement const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherUIOptions)->put_PreferredPlacement(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_System_ILauncherViewOptions<D>::DesiredRemainingView() const
    {
        Windows::UI::ViewManagement::ViewSizePreference value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherViewOptions)->get_DesiredRemainingView(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_ILauncherViewOptions<D>::DesiredRemainingView(Windows::UI::ViewManagement::ViewSizePreference const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ILauncherViewOptions)->put_DesiredRemainingView(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsage() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics)->get_AppMemoryUsage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLimit() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics)->get_AppMemoryUsageLimit(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLevel() const
    {
        Windows::System::AppMemoryUsageLevel value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics)->get_AppMemoryUsageLevel(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics)->add_AppMemoryUsageIncreased(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageIncreased_revoker consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, AppMemoryUsageIncreased_revoker>(this, AppMemoryUsageIncreased(handler));
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageIncreased(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics)->remove_AppMemoryUsageIncreased(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageDecreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics)->add_AppMemoryUsageDecreased(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageDecreased_revoker consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageDecreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, AppMemoryUsageDecreased_revoker>(this, AppMemoryUsageDecreased(handler));
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageDecreased(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics)->remove_AppMemoryUsageDecreased(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLimitChanging(Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics)->add_AppMemoryUsageLimitChanging(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLimitChanging_revoker consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLimitChanging(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, AppMemoryUsageLimitChanging_revoker>(this, AppMemoryUsageLimitChanging(handler));
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics<D>::AppMemoryUsageLimitChanging(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics)->remove_AppMemoryUsageLimitChanging(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics2<D>::GetAppMemoryReport() const
    {
        void* memoryReport{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics2)->GetAppMemoryReport(&memoryReport));
        return Windows::System::AppMemoryReport{ memoryReport, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics2<D>::GetProcessMemoryReport() const
    {
        void* memoryReport{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics2)->GetProcessMemoryReport(&memoryReport));
        return Windows::System::ProcessMemoryReport{ memoryReport, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics3<D>::TrySetAppMemoryUsageLimit(uint64_t value) const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics3)->TrySetAppMemoryUsageLimit(value, &result));
        return result;
    }
    template <typename D> auto consume_Windows_System_IMemoryManagerStatics4<D>::ExpectedAppMemoryUsageLimit() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IMemoryManagerStatics4)->get_ExpectedAppMemoryUsageLimit(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherOptions<D>::StandardInput() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherOptions)->get_StandardInput(&value));
        return Windows::Storage::Streams::IInputStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherOptions<D>::StandardInput(Windows::Storage::Streams::IInputStream const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherOptions)->put_StandardInput(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherOptions<D>::StandardOutput() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherOptions)->get_StandardOutput(&value));
        return Windows::Storage::Streams::IOutputStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherOptions<D>::StandardOutput(Windows::Storage::Streams::IOutputStream const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherOptions)->put_StandardOutput(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherOptions<D>::StandardError() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherOptions)->get_StandardError(&value));
        return Windows::Storage::Streams::IOutputStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherOptions<D>::StandardError(Windows::Storage::Streams::IOutputStream const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherOptions)->put_StandardError(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherOptions<D>::WorkingDirectory() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherOptions)->get_WorkingDirectory(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherOptions<D>::WorkingDirectory(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherOptions)->put_WorkingDirectory(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherResult<D>::ExitCode() const
    {
        uint32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherResult)->get_ExitCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherStatics<D>::RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args) const
    {
        void* asyncOperationResult{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherStatics)->RunToCompletionAsync(*(void**)(&fileName), *(void**)(&args), &asyncOperationResult));
        return Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult>{ asyncOperationResult, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IProcessLauncherStatics<D>::RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args, Windows::System::ProcessLauncherOptions const& options) const
    {
        void* asyncOperationResult{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessLauncherStatics)->RunToCompletionAsyncWithOptions(*(void**)(&fileName), *(void**)(&args), *(void**)(&options), &asyncOperationResult));
        return Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult>{ asyncOperationResult, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IProcessMemoryReport<D>::PrivateWorkingSetUsage() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessMemoryReport)->get_PrivateWorkingSetUsage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IProcessMemoryReport<D>::TotalWorkingSetUsage() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProcessMemoryReport)->get_TotalWorkingSetUsage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IProtocolForResultsOperation<D>::ReportCompleted(Windows::Foundation::Collections::ValueSet const& data) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IProtocolForResultsOperation)->ReportCompleted(*(void**)(&data)));
    }
    template <typename D> auto consume_Windows_System_IRemoteLauncherOptions<D>::FallbackUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IRemoteLauncherOptions)->get_FallbackUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IRemoteLauncherOptions<D>::FallbackUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IRemoteLauncherOptions)->put_FallbackUri(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_IRemoteLauncherOptions<D>::PreferredAppIds() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IRemoteLauncherOptions)->get_PreferredAppIds(&value));
        return Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IRemoteLauncherStatics<D>::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IRemoteLauncherStatics)->LaunchUriAsync(*(void**)(&remoteSystemConnectionRequest), *(void**)(&uri), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IRemoteLauncherStatics<D>::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IRemoteLauncherStatics)->LaunchUriWithOptionsAsync(*(void**)(&remoteSystemConnectionRequest), *(void**)(&uri), *(void**)(&options), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IRemoteLauncherStatics<D>::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IRemoteLauncherStatics)->LaunchUriWithDataAsync(*(void**)(&remoteSystemConnectionRequest), *(void**)(&uri), *(void**)(&options), *(void**)(&inputData), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IShutdownManagerStatics<D>::BeginShutdown(Windows::System::ShutdownKind const& shutdownKind, Windows::Foundation::TimeSpan const& timeout) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IShutdownManagerStatics)->BeginShutdown(static_cast<int32_t>(shutdownKind), impl::bind_in(timeout)));
    }
    template <typename D> auto consume_Windows_System_IShutdownManagerStatics<D>::CancelShutdown() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IShutdownManagerStatics)->CancelShutdown());
    }
    template <typename D> auto consume_Windows_System_IShutdownManagerStatics2<D>::IsPowerStateSupported(Windows::System::PowerState const& powerState) const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IShutdownManagerStatics2)->IsPowerStateSupported(static_cast<int32_t>(powerState), &value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IShutdownManagerStatics2<D>::EnterPowerState(Windows::System::PowerState const& powerState) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IShutdownManagerStatics2)->EnterPowerState(static_cast<int32_t>(powerState)));
    }
    template <typename D> auto consume_Windows_System_IShutdownManagerStatics2<D>::EnterPowerState(Windows::System::PowerState const& powerState, Windows::Foundation::TimeSpan const& wakeUpAfter) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IShutdownManagerStatics2)->EnterPowerStateWithTimeSpan(static_cast<int32_t>(powerState), impl::bind_in(wakeUpAfter)));
    }
    template <typename D> auto consume_Windows_System_ITimeZoneSettingsStatics<D>::CurrentTimeZoneDisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ITimeZoneSettingsStatics)->get_CurrentTimeZoneDisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ITimeZoneSettingsStatics<D>::SupportedTimeZoneDisplayNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ITimeZoneSettingsStatics)->get_SupportedTimeZoneDisplayNames(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_ITimeZoneSettingsStatics<D>::CanChangeTimeZone() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ITimeZoneSettingsStatics)->get_CanChangeTimeZone(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_ITimeZoneSettingsStatics<D>::ChangeTimeZoneByDisplayName(param::hstring const& timeZoneDisplayName) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ITimeZoneSettingsStatics)->ChangeTimeZoneByDisplayName(*(void**)(&timeZoneDisplayName)));
    }
    template <typename D> auto consume_Windows_System_ITimeZoneSettingsStatics2<D>::AutoUpdateTimeZoneAsync(Windows::Foundation::TimeSpan const& timeout) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::ITimeZoneSettingsStatics2)->AutoUpdateTimeZoneAsync(impl::bind_in(timeout), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::AutoUpdateTimeZoneStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUser<D>::NonRoamableId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUser)->get_NonRoamableId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUser<D>::AuthenticationStatus() const
    {
        Windows::System::UserAuthenticationStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUser)->get_AuthenticationStatus(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IUser<D>::Type() const
    {
        Windows::System::UserType value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUser)->get_Type(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IUser<D>::GetPropertyAsync(param::hstring const& value) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUser)->GetPropertyAsync(*(void**)(&value), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUser<D>::GetPropertiesAsync(param::async_vector_view<hstring> const& values) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUser)->GetPropertiesAsync(*(void**)(&values), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUser<D>::GetPictureAsync(Windows::System::UserPictureSize const& desiredSize) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUser)->GetPictureAsync(static_cast<int32_t>(desiredSize), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserAuthenticationStatusChangeDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserAuthenticationStatusChangeDeferral)->Complete());
    }
    template <typename D> auto consume_Windows_System_IUserAuthenticationStatusChangingEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserAuthenticationStatusChangingEventArgs)->GetDeferral(&result));
        return Windows::System::UserAuthenticationStatusChangeDeferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserAuthenticationStatusChangingEventArgs<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserAuthenticationStatusChangingEventArgs)->get_User(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserAuthenticationStatusChangingEventArgs<D>::NewStatus() const
    {
        Windows::System::UserAuthenticationStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserAuthenticationStatusChangingEventArgs)->get_NewStatus(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IUserAuthenticationStatusChangingEventArgs<D>::CurrentStatus() const
    {
        Windows::System::UserAuthenticationStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserAuthenticationStatusChangingEventArgs)->get_CurrentStatus(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IUserChangedEventArgs<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserChangedEventArgs)->get_User(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserChangedEventArgs2<D>::ChangedPropertyKinds() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserChangedEventArgs2)->get_ChangedPropertyKinds(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::System::UserWatcherUpdateKind>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserDeviceAssociationChangedEventArgs<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserDeviceAssociationChangedEventArgs)->get_DeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserDeviceAssociationChangedEventArgs<D>::NewUser() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserDeviceAssociationChangedEventArgs)->get_NewUser(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserDeviceAssociationChangedEventArgs<D>::OldUser() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserDeviceAssociationChangedEventArgs)->get_OldUser(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserDeviceAssociationStatics<D>::FindUserFromDeviceId(param::hstring const& deviceId) const
    {
        void* user{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserDeviceAssociationStatics)->FindUserFromDeviceId(*(void**)(&deviceId), &user));
        return Windows::System::User{ user, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserDeviceAssociationStatics<D>::UserDeviceAssociationChanged(Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserDeviceAssociationStatics)->add_UserDeviceAssociationChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IUserDeviceAssociationStatics<D>::UserDeviceAssociationChanged_revoker consume_Windows_System_IUserDeviceAssociationStatics<D>::UserDeviceAssociationChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, UserDeviceAssociationChanged_revoker>(this, UserDeviceAssociationChanged(handler));
    }
    template <typename D> auto consume_Windows_System_IUserDeviceAssociationStatics<D>::UserDeviceAssociationChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IUserDeviceAssociationStatics)->remove_UserDeviceAssociationChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IUserPicker<D>::AllowGuestAccounts() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserPicker)->get_AllowGuestAccounts(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_IUserPicker<D>::AllowGuestAccounts(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserPicker)->put_AllowGuestAccounts(value));
    }
    template <typename D> auto consume_Windows_System_IUserPicker<D>::SuggestedSelectedUser() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserPicker)->get_SuggestedSelectedUser(&value));
        return Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserPicker<D>::SuggestedSelectedUser(Windows::System::User const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserPicker)->put_SuggestedSelectedUser(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_IUserPicker<D>::PickSingleUserAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserPicker)->PickSingleUserAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::System::User>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserPickerStatics<D>::IsSupported() const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserPickerStatics)->IsSupported(&result));
        return result;
    }
    template <typename D> auto consume_Windows_System_IUserStatics<D>::CreateWatcher() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserStatics)->CreateWatcher(&result));
        return Windows::System::UserWatcher{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserStatics<D>::FindAllAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserStatics)->FindAllAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserStatics<D>::FindAllAsync(Windows::System::UserType const& type) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserStatics)->FindAllAsyncByType(static_cast<int32_t>(type), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserStatics<D>::FindAllAsync(Windows::System::UserType const& type, Windows::System::UserAuthenticationStatus const& status) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserStatics)->FindAllAsyncByTypeAndStatus(static_cast<int32_t>(type), static_cast<int32_t>(status), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserStatics<D>::GetFromId(param::hstring const& nonRoamableId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserStatics)->GetFromId(*(void**)(&nonRoamableId), &result));
        return Windows::System::User{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Status() const
    {
        Windows::System::UserWatcherStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->Start());
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->Stop());
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->add_Added(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IUserWatcher<D>::Added_revoker consume_Windows_System_IUserWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Added_revoker>(this, Added(handler));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Added(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->remove_Added(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->add_Removed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IUserWatcher<D>::Removed_revoker consume_Windows_System_IUserWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Removed_revoker>(this, Removed(handler));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Removed(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->remove_Removed(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->add_Updated(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IUserWatcher<D>::Updated_revoker consume_Windows_System_IUserWatcher<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Updated_revoker>(this, Updated(handler));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Updated(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->remove_Updated(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanged(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->add_AuthenticationStatusChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanged_revoker consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, AuthenticationStatusChanged_revoker>(this, AuthenticationStatusChanged(handler));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->remove_AuthenticationStatusChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanging(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->add_AuthenticationStatusChanging(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanging_revoker consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, AuthenticationStatusChanging_revoker>(this, AuthenticationStatusChanging(handler));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::AuthenticationStatusChanging(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->remove_AuthenticationStatusChanging(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->add_EnumerationCompleted(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IUserWatcher<D>::EnumerationCompleted_revoker consume_Windows_System_IUserWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, EnumerationCompleted_revoker>(this, EnumerationCompleted(handler));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::EnumerationCompleted(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->remove_EnumerationCompleted(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->add_Stopped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_IUserWatcher<D>::Stopped_revoker consume_Windows_System_IUserWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Stopped_revoker>(this, Stopped(handler));
    }
    template <typename D> auto consume_Windows_System_IUserWatcher<D>::Stopped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::System::IUserWatcher)->remove_Stopped(impl::bind_in(token)));
    }
    template <typename H> struct delegate<Windows::System::DispatcherQueueHandler, H> : implements_delegate<Windows::System::DispatcherQueueHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::System::DispatcherQueueHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke() noexcept final try
        {
            (*this)();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppActivationResult> : produce_base<D, Windows::System::IAppActivationResult>
    {
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppResourceGroupInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::AppResourceGroupInfo>(this->shim().AppResourceGroupInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppDiagnosticInfo> : produce_base<D, Windows::System::IAppDiagnosticInfo>
    {
        int32_t __stdcall get_AppInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::AppInfo>(this->shim().AppInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppDiagnosticInfo2> : produce_base<D, Windows::System::IAppDiagnosticInfo2>
    {
        int32_t __stdcall GetResourceGroups(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::System::AppResourceGroupInfo>>(this->shim().GetResourceGroups());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateResourceGroupWatcher(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::AppResourceGroupInfoWatcher>(this->shim().CreateResourceGroupWatcher());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppDiagnosticInfo3> : produce_base<D, Windows::System::IAppDiagnosticInfo3>
    {
        int32_t __stdcall LaunchAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::AppActivationResult>>(this->shim().LaunchAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppDiagnosticInfoStatics> : produce_base<D, Windows::System::IAppDiagnosticInfoStatics>
    {
        int32_t __stdcall RequestInfoAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>>(this->shim().RequestInfoAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppDiagnosticInfoStatics2> : produce_base<D, Windows::System::IAppDiagnosticInfoStatics2>
    {
        int32_t __stdcall CreateWatcher(void** watcher) noexcept final try
        {
            clear_abi(watcher);
            typename D::abi_guard guard(this->shim());
            *watcher = detach_from<Windows::System::AppDiagnosticInfoWatcher>(this->shim().CreateWatcher());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::DiagnosticAccessStatus>>(this->shim().RequestAccessAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestInfoForPackageAsync(void* packageFamilyName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>>(this->shim().RequestInfoForPackageAsync(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestInfoForAppAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>>(this->shim().RequestInfoForAppAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestInfoForAppUserModelId(void* appUserModelId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>>(this->shim().RequestInfoForAppAsync(*reinterpret_cast<hstring const*>(&appUserModelId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppDiagnosticInfoWatcher> : produce_base<D, Windows::System::IAppDiagnosticInfoWatcher>
    {
        int32_t __stdcall add_Added(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Added(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Removed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::System::AppDiagnosticInfoWatcherEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Removed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_EnumerationCompleted(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EnumerationCompleted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Stopped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::AppDiagnosticInfoWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Stopped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::AppDiagnosticInfoWatcherStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppDiagnosticInfoWatcherEventArgs> : produce_base<D, Windows::System::IAppDiagnosticInfoWatcherEventArgs>
    {
        int32_t __stdcall get_AppDiagnosticInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::AppDiagnosticInfo>(this->shim().AppDiagnosticInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppExecutionStateChangeResult> : produce_base<D, Windows::System::IAppExecutionStateChangeResult>
    {
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppMemoryReport> : produce_base<D, Windows::System::IAppMemoryReport>
    {
        int32_t __stdcall get_PrivateCommitUsage(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PrivateCommitUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PeakPrivateCommitUsage(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PeakPrivateCommitUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TotalCommitUsage(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().TotalCommitUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TotalCommitLimit(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().TotalCommitLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppMemoryReport2> : produce_base<D, Windows::System::IAppMemoryReport2>
    {
        int32_t __stdcall get_ExpectedTotalCommitLimit(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().ExpectedTotalCommitLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppMemoryUsageLimitChangingEventArgs> : produce_base<D, Windows::System::IAppMemoryUsageLimitChangingEventArgs>
    {
        int32_t __stdcall get_OldLimit(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().OldLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NewLimit(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().NewLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppResourceGroupBackgroundTaskReport> : produce_base<D, Windows::System::IAppResourceGroupBackgroundTaskReport>
    {
        int32_t __stdcall get_TaskId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TaskId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Trigger(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Trigger());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EntryPoint(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EntryPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppResourceGroupInfo> : produce_base<D, Windows::System::IAppResourceGroupInfo>
    {
        int32_t __stdcall get_InstanceId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().InstanceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsShared(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsShared());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetBackgroundTaskReports(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::System::AppResourceGroupBackgroundTaskReport>>(this->shim().GetBackgroundTaskReports());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetMemoryReport(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::AppResourceGroupMemoryReport>(this->shim().GetMemoryReport());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetProcessDiagnosticInfos(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::System::Diagnostics::ProcessDiagnosticInfo>>(this->shim().GetProcessDiagnosticInfos());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetStateReport(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::AppResourceGroupStateReport>(this->shim().GetStateReport());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppResourceGroupInfo2> : produce_base<D, Windows::System::IAppResourceGroupInfo2>
    {
        int32_t __stdcall StartSuspendAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::AppExecutionStateChangeResult>>(this->shim().StartSuspendAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartResumeAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::AppExecutionStateChangeResult>>(this->shim().StartResumeAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartTerminateAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::AppExecutionStateChangeResult>>(this->shim().StartTerminateAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppResourceGroupInfoWatcher> : produce_base<D, Windows::System::IAppResourceGroupInfoWatcher>
    {
        int32_t __stdcall add_Added(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Added(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Removed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Removed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_EnumerationCompleted(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EnumerationCompleted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Stopped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Stopped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ExecutionStateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ExecutionStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::AppResourceGroupInfoWatcher, Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ExecutionStateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExecutionStateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Status(int32_t* status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::System::AppResourceGroupInfoWatcherStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppResourceGroupInfoWatcherEventArgs> : produce_base<D, Windows::System::IAppResourceGroupInfoWatcherEventArgs>
    {
        int32_t __stdcall get_AppDiagnosticInfos(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::System::AppDiagnosticInfo>>(this->shim().AppDiagnosticInfos());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppResourceGroupInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::AppResourceGroupInfo>(this->shim().AppResourceGroupInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs> : produce_base<D, Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs>
    {
        int32_t __stdcall get_AppDiagnosticInfos(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::System::AppDiagnosticInfo>>(this->shim().AppDiagnosticInfos());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppResourceGroupInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::AppResourceGroupInfo>(this->shim().AppResourceGroupInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppResourceGroupMemoryReport> : produce_base<D, Windows::System::IAppResourceGroupMemoryReport>
    {
        int32_t __stdcall get_CommitUsageLimit(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().CommitUsageLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CommitUsageLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::AppMemoryUsageLevel>(this->shim().CommitUsageLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrivateCommitUsage(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PrivateCommitUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TotalCommitUsage(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().TotalCommitUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppResourceGroupStateReport> : produce_base<D, Windows::System::IAppResourceGroupStateReport>
    {
        int32_t __stdcall get_ExecutionState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::AppResourceGroupExecutionState>(this->shim().ExecutionState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EnergyQuotaState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::AppResourceGroupEnergyQuotaState>(this->shim().EnergyQuotaState());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppUriHandlerHost> : produce_base<D, Windows::System::IAppUriHandlerHost>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Name(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppUriHandlerHostFactory> : produce_base<D, Windows::System::IAppUriHandlerHostFactory>
    {
        int32_t __stdcall CreateInstance(void* name, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::AppUriHandlerHost>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppUriHandlerRegistration> : produce_base<D, Windows::System::IAppUriHandlerRegistration>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAppAddedHostsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::System::AppUriHandlerHost>>>(this->shim().GetAppAddedHostsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAppAddedHostsAsync(void* hosts, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetAppAddedHostsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::System::AppUriHandlerHost> const*>(&hosts)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppUriHandlerRegistrationManager> : produce_base<D, Windows::System::IAppUriHandlerRegistrationManager>
    {
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetRegistration(void* name, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::AppUriHandlerRegistration>(this->shim().TryGetRegistration(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IAppUriHandlerRegistrationManagerStatics> : produce_base<D, Windows::System::IAppUriHandlerRegistrationManagerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::AppUriHandlerRegistrationManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetForUser(void* user, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::AppUriHandlerRegistrationManager>(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IDateTimeSettingsStatics> : produce_base<D, Windows::System::IDateTimeSettingsStatics>
    {
        int32_t __stdcall SetSystemDateTime(int64_t utcDateTime) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSystemDateTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&utcDateTime));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IDispatcherQueue> : produce_base<D, Windows::System::IDispatcherQueue>
    {
        int32_t __stdcall CreateTimer(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::DispatcherQueueTimer>(this->shim().CreateTimer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryEnqueue(void* callback, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryEnqueue(*reinterpret_cast<Windows::System::DispatcherQueueHandler const*>(&callback)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryEnqueueWithPriority(int32_t priority, void* callback, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryEnqueue(*reinterpret_cast<Windows::System::DispatcherQueuePriority const*>(&priority), *reinterpret_cast<Windows::System::DispatcherQueueHandler const*>(&callback)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ShutdownStarting(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ShutdownStarting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::System::DispatcherQueueShutdownStartingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ShutdownStarting(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShutdownStarting(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ShutdownCompleted(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ShutdownCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueue, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ShutdownCompleted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShutdownCompleted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::System::IDispatcherQueue2> : produce_base<D, Windows::System::IDispatcherQueue2>
    {
        int32_t __stdcall get_HasThreadAccess(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasThreadAccess());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IDispatcherQueueController> : produce_base<D, Windows::System::IDispatcherQueueController>
    {
        int32_t __stdcall get_DispatcherQueue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::DispatcherQueue>(this->shim().DispatcherQueue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShutdownQueueAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShutdownQueueAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IDispatcherQueueControllerStatics> : produce_base<D, Windows::System::IDispatcherQueueControllerStatics>
    {
        int32_t __stdcall CreateOnDedicatedThread(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::DispatcherQueueController>(this->shim().CreateOnDedicatedThread());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IDispatcherQueueShutdownStartingEventArgs> : produce_base<D, Windows::System::IDispatcherQueueShutdownStartingEventArgs>
    {
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IDispatcherQueueStatics> : produce_base<D, Windows::System::IDispatcherQueueStatics>
    {
        int32_t __stdcall GetForCurrentThread(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::DispatcherQueue>(this->shim().GetForCurrentThread());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IDispatcherQueueTimer> : produce_base<D, Windows::System::IDispatcherQueueTimer>
    {
        int32_t __stdcall get_Interval(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Interval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Interval(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Interval(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRunning(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRunning());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRepeating(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRepeating());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsRepeating(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRepeating(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Tick(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Tick(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::DispatcherQueueTimer, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Tick(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tick(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::System::IFolderLauncherOptions> : produce_base<D, Windows::System::IFolderLauncherOptions>
    {
        int32_t __stdcall get_ItemsToSelect(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Storage::IStorageItem>>(this->shim().ItemsToSelect());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IKnownUserPropertiesStatics> : produce_base<D, Windows::System::IKnownUserPropertiesStatics>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FirstName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FirstName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LastName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LastName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProviderName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProviderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AccountName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AccountName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GuestHost(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GuestHost());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrincipalName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PrincipalName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DomainName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DomainName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SessionInitiationProtocolUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SessionInitiationProtocolUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILaunchUriResult> : produce_base<D, Windows::System::ILaunchUriResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::LaunchUriStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherOptions> : produce_base<D, Windows::System::ILauncherOptions>
    {
        int32_t __stdcall get_TreatAsUntrusted(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().TreatAsUntrusted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TreatAsUntrusted(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TreatAsUntrusted(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayApplicationPicker(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DisplayApplicationPicker());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayApplicationPicker(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayApplicationPicker(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UI(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::LauncherUIOptions>(this->shim().UI());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PreferredApplicationPackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PreferredApplicationPackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PreferredApplicationPackageFamilyName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredApplicationPackageFamilyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PreferredApplicationDisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PreferredApplicationDisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PreferredApplicationDisplayName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredApplicationDisplayName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FallbackUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().FallbackUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FallbackUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FallbackUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentType(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentType(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherOptions2> : produce_base<D, Windows::System::ILauncherOptions2>
    {
        int32_t __stdcall get_TargetApplicationPackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TargetApplicationPackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetApplicationPackageFamilyName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetApplicationPackageFamilyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NeighboringFilesQuery(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Search::StorageFileQueryResult>(this->shim().NeighboringFilesQuery());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NeighboringFilesQuery(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NeighboringFilesQuery(*reinterpret_cast<Windows::Storage::Search::StorageFileQueryResult const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherOptions3> : produce_base<D, Windows::System::ILauncherOptions3>
    {
        int32_t __stdcall get_IgnoreAppUriHandlers(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IgnoreAppUriHandlers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IgnoreAppUriHandlers(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IgnoreAppUriHandlers(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherOptions4> : produce_base<D, Windows::System::ILauncherOptions4>
    {
        int32_t __stdcall get_LimitPickerToCurrentAppAndAppUriHandlers(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().LimitPickerToCurrentAppAndAppUriHandlers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LimitPickerToCurrentAppAndAppUriHandlers(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LimitPickerToCurrentAppAndAppUriHandlers(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherStatics> : produce_base<D, Windows::System::ILauncherStatics>
    {
        int32_t __stdcall LaunchFileAsync(void* file, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchFileWithOptionsAsync(void* file, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriWithOptionsAsync(void* uri, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherStatics2> : produce_base<D, Windows::System::ILauncherStatics2>
    {
        int32_t __stdcall LaunchUriForResultsAsync(void* uri, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>>(this->shim().LaunchUriForResultsAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriForResultsWithDataAsync(void* uri, void* options, void* inputData, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>>(this->shim().LaunchUriForResultsAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&inputData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriWithDataAsync(void* uri, void* options, void* inputData, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&inputData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall QueryUriSupportAsync(void* uri, int32_t launchQuerySupportType, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>>(this->shim().QueryUriSupportAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LaunchQuerySupportType const*>(&launchQuerySupportType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall QueryUriSupportWithPackageFamilyNameAsync(void* uri, int32_t launchQuerySupportType, void* packageFamilyName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>>(this->shim().QueryUriSupportAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LaunchQuerySupportType const*>(&launchQuerySupportType), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall QueryFileSupportAsync(void* file, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>>(this->shim().QueryFileSupportAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall QueryFileSupportWithPackageFamilyNameAsync(void* file, void* packageFamilyName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>>(this->shim().QueryFileSupportAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindUriSchemeHandlersAsync(void* scheme, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>>(this->shim().FindUriSchemeHandlersAsync(*reinterpret_cast<hstring const*>(&scheme)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindUriSchemeHandlersWithLaunchUriTypeAsync(void* scheme, int32_t launchQuerySupportType, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>>(this->shim().FindUriSchemeHandlersAsync(*reinterpret_cast<hstring const*>(&scheme), *reinterpret_cast<Windows::System::LaunchQuerySupportType const*>(&launchQuerySupportType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindFileHandlersAsync(void* extension, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>>(this->shim().FindFileHandlersAsync(*reinterpret_cast<hstring const*>(&extension)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherStatics3> : produce_base<D, Windows::System::ILauncherStatics3>
    {
        int32_t __stdcall LaunchFolderAsync(void* folder, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchFolderAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&folder)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchFolderWithOptionsAsync(void* folder, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchFolderAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&folder), *reinterpret_cast<Windows::System::FolderLauncherOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherStatics4> : produce_base<D, Windows::System::ILauncherStatics4>
    {
        int32_t __stdcall QueryAppUriSupportAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>>(this->shim().QueryAppUriSupportAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall QueryAppUriSupportWithPackageFamilyNameAsync(void* uri, void* packageFamilyName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchQuerySupportStatus>>(this->shim().QueryAppUriSupportAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAppUriHandlersAsync(void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>>>(this->shim().FindAppUriHandlersAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriForUserAsync(void* user, void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus>>(this->shim().LaunchUriForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriWithOptionsForUserAsync(void* user, void* uri, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus>>(this->shim().LaunchUriForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriWithDataForUserAsync(void* user, void* uri, void* options, void* inputData, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriStatus>>(this->shim().LaunchUriForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&inputData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriForResultsForUserAsync(void* user, void* uri, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>>(this->shim().LaunchUriForResultsForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriForResultsWithDataForUserAsync(void* user, void* uri, void* options, void* inputData, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult>>(this->shim().LaunchUriForResultsForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::LauncherOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&inputData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherStatics5> : produce_base<D, Windows::System::ILauncherStatics5>
    {
        int32_t __stdcall LaunchFolderPathAsync(void* path, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchFolderPathAsync(*reinterpret_cast<hstring const*>(&path)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchFolderPathWithOptionsAsync(void* path, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchFolderPathAsync(*reinterpret_cast<hstring const*>(&path), *reinterpret_cast<Windows::System::FolderLauncherOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchFolderPathForUserAsync(void* user, void* path, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchFolderPathForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&path)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchFolderPathWithOptionsForUserAsync(void* user, void* path, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchFolderPathForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&path), *reinterpret_cast<Windows::System::FolderLauncherOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherUIOptions> : produce_base<D, Windows::System::ILauncherUIOptions>
    {
        int32_t __stdcall get_InvocationPoint(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Point>>(this->shim().InvocationPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_InvocationPoint(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvocationPoint(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Point> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectionRect(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Rect>>(this->shim().SelectionRect());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SelectionRect(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionRect(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Rect> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PreferredPlacement(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Popups::Placement>(this->shim().PreferredPlacement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PreferredPlacement(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredPlacement(*reinterpret_cast<Windows::UI::Popups::Placement const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ILauncherViewOptions> : produce_base<D, Windows::System::ILauncherViewOptions>
    {
        int32_t __stdcall get_DesiredRemainingView(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ViewManagement::ViewSizePreference>(this->shim().DesiredRemainingView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DesiredRemainingView(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredRemainingView(*reinterpret_cast<Windows::UI::ViewManagement::ViewSizePreference const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IMemoryManagerStatics> : produce_base<D, Windows::System::IMemoryManagerStatics>
    {
        int32_t __stdcall get_AppMemoryUsage(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().AppMemoryUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppMemoryUsageLimit(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().AppMemoryUsageLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppMemoryUsageLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::AppMemoryUsageLevel>(this->shim().AppMemoryUsageLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_AppMemoryUsageIncreased(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AppMemoryUsageIncreased(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AppMemoryUsageIncreased(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppMemoryUsageIncreased(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_AppMemoryUsageDecreased(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AppMemoryUsageDecreased(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AppMemoryUsageDecreased(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppMemoryUsageDecreased(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_AppMemoryUsageLimitChanging(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AppMemoryUsageLimitChanging(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AppMemoryUsageLimitChanging(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppMemoryUsageLimitChanging(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::System::IMemoryManagerStatics2> : produce_base<D, Windows::System::IMemoryManagerStatics2>
    {
        int32_t __stdcall GetAppMemoryReport(void** memoryReport) noexcept final try
        {
            clear_abi(memoryReport);
            typename D::abi_guard guard(this->shim());
            *memoryReport = detach_from<Windows::System::AppMemoryReport>(this->shim().GetAppMemoryReport());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetProcessMemoryReport(void** memoryReport) noexcept final try
        {
            clear_abi(memoryReport);
            typename D::abi_guard guard(this->shim());
            *memoryReport = detach_from<Windows::System::ProcessMemoryReport>(this->shim().GetProcessMemoryReport());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IMemoryManagerStatics3> : produce_base<D, Windows::System::IMemoryManagerStatics3>
    {
        int32_t __stdcall TrySetAppMemoryUsageLimit(uint64_t value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TrySetAppMemoryUsageLimit(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IMemoryManagerStatics4> : produce_base<D, Windows::System::IMemoryManagerStatics4>
    {
        int32_t __stdcall get_ExpectedAppMemoryUsageLimit(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().ExpectedAppMemoryUsageLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IProcessLauncherOptions> : produce_base<D, Windows::System::IProcessLauncherOptions>
    {
        int32_t __stdcall get_StandardInput(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().StandardInput());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StandardInput(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StandardInput(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StandardOutput(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().StandardOutput());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StandardOutput(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StandardOutput(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StandardError(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().StandardError());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StandardError(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StandardError(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WorkingDirectory(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WorkingDirectory());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WorkingDirectory(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WorkingDirectory(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IProcessLauncherResult> : produce_base<D, Windows::System::IProcessLauncherResult>
    {
        int32_t __stdcall get_ExitCode(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ExitCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IProcessLauncherStatics> : produce_base<D, Windows::System::IProcessLauncherStatics>
    {
        int32_t __stdcall RunToCompletionAsync(void* fileName, void* args, void** asyncOperationResult) noexcept final try
        {
            clear_abi(asyncOperationResult);
            typename D::abi_guard guard(this->shim());
            *asyncOperationResult = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult>>(this->shim().RunToCompletionAsync(*reinterpret_cast<hstring const*>(&fileName), *reinterpret_cast<hstring const*>(&args)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RunToCompletionAsyncWithOptions(void* fileName, void* args, void* options, void** asyncOperationResult) noexcept final try
        {
            clear_abi(asyncOperationResult);
            typename D::abi_guard guard(this->shim());
            *asyncOperationResult = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult>>(this->shim().RunToCompletionAsync(*reinterpret_cast<hstring const*>(&fileName), *reinterpret_cast<hstring const*>(&args), *reinterpret_cast<Windows::System::ProcessLauncherOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IProcessMemoryReport> : produce_base<D, Windows::System::IProcessMemoryReport>
    {
        int32_t __stdcall get_PrivateWorkingSetUsage(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PrivateWorkingSetUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TotalWorkingSetUsage(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().TotalWorkingSetUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IProtocolForResultsOperation> : produce_base<D, Windows::System::IProtocolForResultsOperation>
    {
        int32_t __stdcall ReportCompleted(void* data) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&data));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IRemoteLauncherOptions> : produce_base<D, Windows::System::IRemoteLauncherOptions>
    {
        int32_t __stdcall get_FallbackUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().FallbackUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FallbackUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FallbackUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PreferredAppIds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().PreferredAppIds());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IRemoteLauncherStatics> : produce_base<D, Windows::System::IRemoteLauncherStatics>
    {
        int32_t __stdcall LaunchUriAsync(void* remoteSystemConnectionRequest, void* uri, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus>>(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemConnectionRequest const*>(&remoteSystemConnectionRequest), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriWithOptionsAsync(void* remoteSystemConnectionRequest, void* uri, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus>>(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemConnectionRequest const*>(&remoteSystemConnectionRequest), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::RemoteLauncherOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchUriWithDataAsync(void* remoteSystemConnectionRequest, void* uri, void* options, void* inputData, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::RemoteLaunchUriStatus>>(this->shim().LaunchUriAsync(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemConnectionRequest const*>(&remoteSystemConnectionRequest), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::System::RemoteLauncherOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&inputData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IShutdownManagerStatics> : produce_base<D, Windows::System::IShutdownManagerStatics>
    {
        int32_t __stdcall BeginShutdown(int32_t shutdownKind, int64_t timeout) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginShutdown(*reinterpret_cast<Windows::System::ShutdownKind const*>(&shutdownKind), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeout));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CancelShutdown() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelShutdown();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IShutdownManagerStatics2> : produce_base<D, Windows::System::IShutdownManagerStatics2>
    {
        int32_t __stdcall IsPowerStateSupported(int32_t powerState, bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPowerStateSupported(*reinterpret_cast<Windows::System::PowerState const*>(&powerState)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EnterPowerState(int32_t powerState) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnterPowerState(*reinterpret_cast<Windows::System::PowerState const*>(&powerState));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EnterPowerStateWithTimeSpan(int32_t powerState, int64_t wakeUpAfter) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnterPowerState(*reinterpret_cast<Windows::System::PowerState const*>(&powerState), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&wakeUpAfter));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ITimeZoneSettingsStatics> : produce_base<D, Windows::System::ITimeZoneSettingsStatics>
    {
        int32_t __stdcall get_CurrentTimeZoneDisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CurrentTimeZoneDisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedTimeZoneDisplayNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().SupportedTimeZoneDisplayNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanChangeTimeZone(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanChangeTimeZone());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ChangeTimeZoneByDisplayName(void* timeZoneDisplayName) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangeTimeZoneByDisplayName(*reinterpret_cast<hstring const*>(&timeZoneDisplayName));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::ITimeZoneSettingsStatics2> : produce_base<D, Windows::System::ITimeZoneSettingsStatics2>
    {
        int32_t __stdcall AutoUpdateTimeZoneAsync(int64_t timeout, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::AutoUpdateTimeZoneStatus>>(this->shim().AutoUpdateTimeZoneAsync(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeout)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IUser> : produce_base<D, Windows::System::IUser>
    {
        int32_t __stdcall get_NonRoamableId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NonRoamableId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AuthenticationStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::UserAuthenticationStatus>(this->shim().AuthenticationStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::UserType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPropertyAsync(void* value, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable>>(this->shim().GetPropertyAsync(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPropertiesAsync(void* values, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet>>(this->shim().GetPropertiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&values)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPictureAsync(int32_t desiredSize, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference>>(this->shim().GetPictureAsync(*reinterpret_cast<Windows::System::UserPictureSize const*>(&desiredSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IUserAuthenticationStatusChangeDeferral> : produce_base<D, Windows::System::IUserAuthenticationStatusChangeDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IUserAuthenticationStatusChangingEventArgs> : produce_base<D, Windows::System::IUserAuthenticationStatusChangingEventArgs>
    {
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::UserAuthenticationStatusChangeDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NewStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::UserAuthenticationStatus>(this->shim().NewStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::UserAuthenticationStatus>(this->shim().CurrentStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IUserChangedEventArgs> : produce_base<D, Windows::System::IUserChangedEventArgs>
    {
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IUserChangedEventArgs2> : produce_base<D, Windows::System::IUserChangedEventArgs2>
    {
        int32_t __stdcall get_ChangedPropertyKinds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::System::UserWatcherUpdateKind>>(this->shim().ChangedPropertyKinds());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IUserDeviceAssociationChangedEventArgs> : produce_base<D, Windows::System::IUserDeviceAssociationChangedEventArgs>
    {
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NewUser(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().NewUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OldUser(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().OldUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IUserDeviceAssociationStatics> : produce_base<D, Windows::System::IUserDeviceAssociationStatics>
    {
        int32_t __stdcall FindUserFromDeviceId(void* deviceId, void** user) noexcept final try
        {
            clear_abi(user);
            typename D::abi_guard guard(this->shim());
            *user = detach_from<Windows::System::User>(this->shim().FindUserFromDeviceId(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_UserDeviceAssociationChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UserDeviceAssociationChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UserDeviceAssociationChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserDeviceAssociationChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::System::IUserPicker> : produce_base<D, Windows::System::IUserPicker>
    {
        int32_t __stdcall get_AllowGuestAccounts(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowGuestAccounts());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowGuestAccounts(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowGuestAccounts(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SuggestedSelectedUser(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().SuggestedSelectedUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SuggestedSelectedUser(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuggestedSelectedUser(*reinterpret_cast<Windows::System::User const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PickSingleUserAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::System::User>>(this->shim().PickSingleUserAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IUserPickerStatics> : produce_base<D, Windows::System::IUserPickerStatics>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IUserStatics> : produce_base<D, Windows::System::IUserStatics>
    {
        int32_t __stdcall CreateWatcher(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::UserWatcher>(this->shim().CreateWatcher());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>>(this->shim().FindAllAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllAsyncByType(int32_t type, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>>(this->shim().FindAllAsync(*reinterpret_cast<Windows::System::UserType const*>(&type)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllAsyncByTypeAndStatus(int32_t type, int32_t status, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>>>(this->shim().FindAllAsync(*reinterpret_cast<Windows::System::UserType const*>(&type), *reinterpret_cast<Windows::System::UserAuthenticationStatus const*>(&status)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFromId(void* nonRoamableId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::User>(this->shim().GetFromId(*reinterpret_cast<hstring const*>(&nonRoamableId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::System::IUserWatcher> : produce_base<D, Windows::System::IUserWatcher>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::UserWatcherStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Added(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Added(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Removed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Removed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Updated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Updated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_AuthenticationStatusChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AuthenticationStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AuthenticationStatusChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationStatusChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_AuthenticationStatusChanging(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AuthenticationStatusChanging(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AuthenticationStatusChanging(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationStatusChanging(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_EnumerationCompleted(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_EnumerationCompleted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Stopped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Stopped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
}
namespace winrt::Windows::System
{
    constexpr auto operator|(VirtualKeyModifiers const left, VirtualKeyModifiers const right) noexcept
    {
        return static_cast<VirtualKeyModifiers>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(VirtualKeyModifiers& left, VirtualKeyModifiers const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(VirtualKeyModifiers const left, VirtualKeyModifiers const right) noexcept
    {
        return static_cast<VirtualKeyModifiers>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(VirtualKeyModifiers& left, VirtualKeyModifiers const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(VirtualKeyModifiers const value) noexcept
    {
        return static_cast<VirtualKeyModifiers>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(VirtualKeyModifiers const left, VirtualKeyModifiers const right) noexcept
    {
        return static_cast<VirtualKeyModifiers>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(VirtualKeyModifiers& left, VirtualKeyModifiers const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto AppDiagnosticInfo::RequestInfoAsync()
    {
        return impl::call_factory<AppDiagnosticInfo, Windows::System::IAppDiagnosticInfoStatics>([&](auto&& f) { return f.RequestInfoAsync(); });
    }
    inline auto AppDiagnosticInfo::CreateWatcher()
    {
        return impl::call_factory<AppDiagnosticInfo, Windows::System::IAppDiagnosticInfoStatics2>([&](auto&& f) { return f.CreateWatcher(); });
    }
    inline auto AppDiagnosticInfo::RequestAccessAsync()
    {
        return impl::call_factory<AppDiagnosticInfo, Windows::System::IAppDiagnosticInfoStatics2>([&](auto&& f) { return f.RequestAccessAsync(); });
    }
    inline auto AppDiagnosticInfo::RequestInfoForPackageAsync(param::hstring const& packageFamilyName)
    {
        return impl::call_factory<AppDiagnosticInfo, Windows::System::IAppDiagnosticInfoStatics2>([&](auto&& f) { return f.RequestInfoForPackageAsync(packageFamilyName); });
    }
    inline auto AppDiagnosticInfo::RequestInfoForAppAsync()
    {
        return impl::call_factory<AppDiagnosticInfo, Windows::System::IAppDiagnosticInfoStatics2>([&](auto&& f) { return f.RequestInfoForAppAsync(); });
    }
    inline auto AppDiagnosticInfo::RequestInfoForAppAsync(param::hstring const& appUserModelId)
    {
        return impl::call_factory<AppDiagnosticInfo, Windows::System::IAppDiagnosticInfoStatics2>([&](auto&& f) { return f.RequestInfoForAppAsync(appUserModelId); });
    }
    inline AppUriHandlerHost::AppUriHandlerHost() :
        AppUriHandlerHost(impl::call_factory<AppUriHandlerHost>([](auto&& f) { return f.template ActivateInstance<AppUriHandlerHost>(); }))
    {
    }
    inline AppUriHandlerHost::AppUriHandlerHost(param::hstring const& name) :
        AppUriHandlerHost(impl::call_factory<AppUriHandlerHost, Windows::System::IAppUriHandlerHostFactory>([&](auto&& f) { return f.CreateInstance(name); }))
    {
    }
    inline auto AppUriHandlerRegistrationManager::GetDefault()
    {
        return impl::call_factory<AppUriHandlerRegistrationManager, Windows::System::IAppUriHandlerRegistrationManagerStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline auto AppUriHandlerRegistrationManager::GetForUser(Windows::System::User const& user)
    {
        return impl::call_factory<AppUriHandlerRegistrationManager, Windows::System::IAppUriHandlerRegistrationManagerStatics>([&](auto&& f) { return f.GetForUser(user); });
    }
    inline auto DateTimeSettings::SetSystemDateTime(Windows::Foundation::DateTime const& utcDateTime)
    {
        impl::call_factory<DateTimeSettings, Windows::System::IDateTimeSettingsStatics>([&](auto&& f) { return f.SetSystemDateTime(utcDateTime); });
    }
    inline auto DispatcherQueue::GetForCurrentThread()
    {
        return impl::call_factory<DispatcherQueue, Windows::System::IDispatcherQueueStatics>([&](auto&& f) { return f.GetForCurrentThread(); });
    }
    inline auto DispatcherQueueController::CreateOnDedicatedThread()
    {
        return impl::call_factory<DispatcherQueueController, Windows::System::IDispatcherQueueControllerStatics>([&](auto&& f) { return f.CreateOnDedicatedThread(); });
    }
    inline FolderLauncherOptions::FolderLauncherOptions() :
        FolderLauncherOptions(impl::call_factory<FolderLauncherOptions>([](auto&& f) { return f.template ActivateInstance<FolderLauncherOptions>(); }))
    {
    }
    inline auto KnownUserProperties::DisplayName()
    {
        return impl::call_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>([&](auto&& f) { return f.DisplayName(); });
    }
    inline auto KnownUserProperties::FirstName()
    {
        return impl::call_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>([&](auto&& f) { return f.FirstName(); });
    }
    inline auto KnownUserProperties::LastName()
    {
        return impl::call_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>([&](auto&& f) { return f.LastName(); });
    }
    inline auto KnownUserProperties::ProviderName()
    {
        return impl::call_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>([&](auto&& f) { return f.ProviderName(); });
    }
    inline auto KnownUserProperties::AccountName()
    {
        return impl::call_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>([&](auto&& f) { return f.AccountName(); });
    }
    inline auto KnownUserProperties::GuestHost()
    {
        return impl::call_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>([&](auto&& f) { return f.GuestHost(); });
    }
    inline auto KnownUserProperties::PrincipalName()
    {
        return impl::call_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>([&](auto&& f) { return f.PrincipalName(); });
    }
    inline auto KnownUserProperties::DomainName()
    {
        return impl::call_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>([&](auto&& f) { return f.DomainName(); });
    }
    inline auto KnownUserProperties::SessionInitiationProtocolUri()
    {
        return impl::call_factory<KnownUserProperties, Windows::System::IKnownUserPropertiesStatics>([&](auto&& f) { return f.SessionInitiationProtocolUri(); });
    }
    inline auto Launcher::LaunchFileAsync(Windows::Storage::IStorageFile const& file)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics>([&](auto&& f) { return f.LaunchFileAsync(file); });
    }
    inline auto Launcher::LaunchFileAsync(Windows::Storage::IStorageFile const& file, Windows::System::LauncherOptions const& options)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics>([&](auto&& f) { return f.LaunchFileAsync(file, options); });
    }
    inline auto Launcher::LaunchUriAsync(Windows::Foundation::Uri const& uri)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics>([&](auto&& f) { return f.LaunchUriAsync(uri); });
    }
    inline auto Launcher::LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics>([&](auto&& f) { return f.LaunchUriAsync(uri, options); });
    }
    inline auto Launcher::LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics2>([&](auto&& f) { return f.LaunchUriForResultsAsync(uri, options); });
    }
    inline auto Launcher::LaunchUriForResultsAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics2>([&](auto&& f) { return f.LaunchUriForResultsAsync(uri, options, inputData); });
    }
    inline auto Launcher::LaunchUriAsync(Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics2>([&](auto&& f) { return f.LaunchUriAsync(uri, options, inputData); });
    }
    inline auto Launcher::QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics2>([&](auto&& f) { return f.QueryUriSupportAsync(uri, launchQuerySupportType); });
    }
    inline auto Launcher::QueryUriSupportAsync(Windows::Foundation::Uri const& uri, Windows::System::LaunchQuerySupportType const& launchQuerySupportType, param::hstring const& packageFamilyName)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics2>([&](auto&& f) { return f.QueryUriSupportAsync(uri, launchQuerySupportType, packageFamilyName); });
    }
    inline auto Launcher::QueryFileSupportAsync(Windows::Storage::StorageFile const& file)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics2>([&](auto&& f) { return f.QueryFileSupportAsync(file); });
    }
    inline auto Launcher::QueryFileSupportAsync(Windows::Storage::StorageFile const& file, param::hstring const& packageFamilyName)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics2>([&](auto&& f) { return f.QueryFileSupportAsync(file, packageFamilyName); });
    }
    inline auto Launcher::FindUriSchemeHandlersAsync(param::hstring const& scheme)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics2>([&](auto&& f) { return f.FindUriSchemeHandlersAsync(scheme); });
    }
    inline auto Launcher::FindUriSchemeHandlersAsync(param::hstring const& scheme, Windows::System::LaunchQuerySupportType const& launchQuerySupportType)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics2>([&](auto&& f) { return f.FindUriSchemeHandlersAsync(scheme, launchQuerySupportType); });
    }
    inline auto Launcher::FindFileHandlersAsync(param::hstring const& extension)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics2>([&](auto&& f) { return f.FindFileHandlersAsync(extension); });
    }
    inline auto Launcher::LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics3>([&](auto&& f) { return f.LaunchFolderAsync(folder); });
    }
    inline auto Launcher::LaunchFolderAsync(Windows::Storage::IStorageFolder const& folder, Windows::System::FolderLauncherOptions const& options)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics3>([&](auto&& f) { return f.LaunchFolderAsync(folder, options); });
    }
    inline auto Launcher::QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics4>([&](auto&& f) { return f.QueryAppUriSupportAsync(uri); });
    }
    inline auto Launcher::QueryAppUriSupportAsync(Windows::Foundation::Uri const& uri, param::hstring const& packageFamilyName)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics4>([&](auto&& f) { return f.QueryAppUriSupportAsync(uri, packageFamilyName); });
    }
    inline auto Launcher::FindAppUriHandlersAsync(Windows::Foundation::Uri const& uri)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics4>([&](auto&& f) { return f.FindAppUriHandlersAsync(uri); });
    }
    inline auto Launcher::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics4>([&](auto&& f) { return f.LaunchUriForUserAsync(user, uri); });
    }
    inline auto Launcher::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics4>([&](auto&& f) { return f.LaunchUriForUserAsync(user, uri, options); });
    }
    inline auto Launcher::LaunchUriForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics4>([&](auto&& f) { return f.LaunchUriForUserAsync(user, uri, options, inputData); });
    }
    inline auto Launcher::LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics4>([&](auto&& f) { return f.LaunchUriForResultsForUserAsync(user, uri, options); });
    }
    inline auto Launcher::LaunchUriForResultsForUserAsync(Windows::System::User const& user, Windows::Foundation::Uri const& uri, Windows::System::LauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics4>([&](auto&& f) { return f.LaunchUriForResultsForUserAsync(user, uri, options, inputData); });
    }
    inline auto Launcher::LaunchFolderPathAsync(param::hstring const& path)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics5>([&](auto&& f) { return f.LaunchFolderPathAsync(path); });
    }
    inline auto Launcher::LaunchFolderPathAsync(param::hstring const& path, Windows::System::FolderLauncherOptions const& options)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics5>([&](auto&& f) { return f.LaunchFolderPathAsync(path, options); });
    }
    inline auto Launcher::LaunchFolderPathForUserAsync(Windows::System::User const& user, param::hstring const& path)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics5>([&](auto&& f) { return f.LaunchFolderPathForUserAsync(user, path); });
    }
    inline auto Launcher::LaunchFolderPathForUserAsync(Windows::System::User const& user, param::hstring const& path, Windows::System::FolderLauncherOptions const& options)
    {
        return impl::call_factory<Launcher, Windows::System::ILauncherStatics5>([&](auto&& f) { return f.LaunchFolderPathForUserAsync(user, path, options); });
    }
    inline LauncherOptions::LauncherOptions() :
        LauncherOptions(impl::call_factory<LauncherOptions>([](auto&& f) { return f.template ActivateInstance<LauncherOptions>(); }))
    {
    }
    inline auto MemoryManager::AppMemoryUsage()
    {
        return impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics>([&](auto&& f) { return f.AppMemoryUsage(); });
    }
    inline auto MemoryManager::AppMemoryUsageLimit()
    {
        return impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics>([&](auto&& f) { return f.AppMemoryUsageLimit(); });
    }
    inline auto MemoryManager::AppMemoryUsageLevel()
    {
        return impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics>([&](auto&& f) { return f.AppMemoryUsageLevel(); });
    }
    inline auto MemoryManager::AppMemoryUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics>([&](auto&& f) { return f.AppMemoryUsageIncreased(handler); });
    }
    inline MemoryManager::AppMemoryUsageIncreased_revoker MemoryManager::AppMemoryUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>();
        return { f, f.AppMemoryUsageIncreased(handler) };
    }
    inline auto MemoryManager::AppMemoryUsageIncreased(winrt::event_token const& token)
    {
        impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics>([&](auto&& f) { return f.AppMemoryUsageIncreased(token); });
    }
    inline auto MemoryManager::AppMemoryUsageDecreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics>([&](auto&& f) { return f.AppMemoryUsageDecreased(handler); });
    }
    inline MemoryManager::AppMemoryUsageDecreased_revoker MemoryManager::AppMemoryUsageDecreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>();
        return { f, f.AppMemoryUsageDecreased(handler) };
    }
    inline auto MemoryManager::AppMemoryUsageDecreased(winrt::event_token const& token)
    {
        impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics>([&](auto&& f) { return f.AppMemoryUsageDecreased(token); });
    }
    inline auto MemoryManager::AppMemoryUsageLimitChanging(Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler)
    {
        return impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics>([&](auto&& f) { return f.AppMemoryUsageLimitChanging(handler); });
    }
    inline MemoryManager::AppMemoryUsageLimitChanging_revoker MemoryManager::AppMemoryUsageLimitChanging(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler)
    {
        auto f = get_activation_factory<MemoryManager, Windows::System::IMemoryManagerStatics>();
        return { f, f.AppMemoryUsageLimitChanging(handler) };
    }
    inline auto MemoryManager::AppMemoryUsageLimitChanging(winrt::event_token const& token)
    {
        impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics>([&](auto&& f) { return f.AppMemoryUsageLimitChanging(token); });
    }
    inline auto MemoryManager::GetAppMemoryReport()
    {
        return impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics2>([&](auto&& f) { return f.GetAppMemoryReport(); });
    }
    inline auto MemoryManager::GetProcessMemoryReport()
    {
        return impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics2>([&](auto&& f) { return f.GetProcessMemoryReport(); });
    }
    inline auto MemoryManager::TrySetAppMemoryUsageLimit(uint64_t value)
    {
        return impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics3>([&](auto&& f) { return f.TrySetAppMemoryUsageLimit(value); });
    }
    inline auto MemoryManager::ExpectedAppMemoryUsageLimit()
    {
        return impl::call_factory<MemoryManager, Windows::System::IMemoryManagerStatics4>([&](auto&& f) { return f.ExpectedAppMemoryUsageLimit(); });
    }
    inline auto ProcessLauncher::RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args)
    {
        return impl::call_factory<ProcessLauncher, Windows::System::IProcessLauncherStatics>([&](auto&& f) { return f.RunToCompletionAsync(fileName, args); });
    }
    inline auto ProcessLauncher::RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args, Windows::System::ProcessLauncherOptions const& options)
    {
        return impl::call_factory<ProcessLauncher, Windows::System::IProcessLauncherStatics>([&](auto&& f) { return f.RunToCompletionAsync(fileName, args, options); });
    }
    inline ProcessLauncherOptions::ProcessLauncherOptions() :
        ProcessLauncherOptions(impl::call_factory<ProcessLauncherOptions>([](auto&& f) { return f.template ActivateInstance<ProcessLauncherOptions>(); }))
    {
    }
    inline auto RemoteLauncher::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri)
    {
        return impl::call_factory<RemoteLauncher, Windows::System::IRemoteLauncherStatics>([&](auto&& f) { return f.LaunchUriAsync(remoteSystemConnectionRequest, uri); });
    }
    inline auto RemoteLauncher::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options)
    {
        return impl::call_factory<RemoteLauncher, Windows::System::IRemoteLauncherStatics>([&](auto&& f) { return f.LaunchUriAsync(remoteSystemConnectionRequest, uri, options); });
    }
    inline auto RemoteLauncher::LaunchUriAsync(Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, Windows::Foundation::Uri const& uri, Windows::System::RemoteLauncherOptions const& options, Windows::Foundation::Collections::ValueSet const& inputData)
    {
        return impl::call_factory<RemoteLauncher, Windows::System::IRemoteLauncherStatics>([&](auto&& f) { return f.LaunchUriAsync(remoteSystemConnectionRequest, uri, options, inputData); });
    }
    inline RemoteLauncherOptions::RemoteLauncherOptions() :
        RemoteLauncherOptions(impl::call_factory<RemoteLauncherOptions>([](auto&& f) { return f.template ActivateInstance<RemoteLauncherOptions>(); }))
    {
    }
    inline auto ShutdownManager::BeginShutdown(Windows::System::ShutdownKind const& shutdownKind, Windows::Foundation::TimeSpan const& timeout)
    {
        impl::call_factory<ShutdownManager, Windows::System::IShutdownManagerStatics>([&](auto&& f) { return f.BeginShutdown(shutdownKind, timeout); });
    }
    inline auto ShutdownManager::CancelShutdown()
    {
        impl::call_factory<ShutdownManager, Windows::System::IShutdownManagerStatics>([&](auto&& f) { return f.CancelShutdown(); });
    }
    inline auto ShutdownManager::IsPowerStateSupported(Windows::System::PowerState const& powerState)
    {
        return impl::call_factory<ShutdownManager, Windows::System::IShutdownManagerStatics2>([&](auto&& f) { return f.IsPowerStateSupported(powerState); });
    }
    inline auto ShutdownManager::EnterPowerState(Windows::System::PowerState const& powerState)
    {
        impl::call_factory<ShutdownManager, Windows::System::IShutdownManagerStatics2>([&](auto&& f) { return f.EnterPowerState(powerState); });
    }
    inline auto ShutdownManager::EnterPowerState(Windows::System::PowerState const& powerState, Windows::Foundation::TimeSpan const& wakeUpAfter)
    {
        impl::call_factory<ShutdownManager, Windows::System::IShutdownManagerStatics2>([&](auto&& f) { return f.EnterPowerState(powerState, wakeUpAfter); });
    }
    inline auto TimeZoneSettings::CurrentTimeZoneDisplayName()
    {
        return impl::call_factory<TimeZoneSettings, Windows::System::ITimeZoneSettingsStatics>([&](auto&& f) { return f.CurrentTimeZoneDisplayName(); });
    }
    inline auto TimeZoneSettings::SupportedTimeZoneDisplayNames()
    {
        return impl::call_factory<TimeZoneSettings, Windows::System::ITimeZoneSettingsStatics>([&](auto&& f) { return f.SupportedTimeZoneDisplayNames(); });
    }
    inline auto TimeZoneSettings::CanChangeTimeZone()
    {
        return impl::call_factory<TimeZoneSettings, Windows::System::ITimeZoneSettingsStatics>([&](auto&& f) { return f.CanChangeTimeZone(); });
    }
    inline auto TimeZoneSettings::ChangeTimeZoneByDisplayName(param::hstring const& timeZoneDisplayName)
    {
        impl::call_factory<TimeZoneSettings, Windows::System::ITimeZoneSettingsStatics>([&](auto&& f) { return f.ChangeTimeZoneByDisplayName(timeZoneDisplayName); });
    }
    inline auto TimeZoneSettings::AutoUpdateTimeZoneAsync(Windows::Foundation::TimeSpan const& timeout)
    {
        return impl::call_factory<TimeZoneSettings, Windows::System::ITimeZoneSettingsStatics2>([&](auto&& f) { return f.AutoUpdateTimeZoneAsync(timeout); });
    }
    inline auto User::CreateWatcher()
    {
        return impl::call_factory<User, Windows::System::IUserStatics>([&](auto&& f) { return f.CreateWatcher(); });
    }
    inline auto User::FindAllAsync()
    {
        return impl::call_factory<User, Windows::System::IUserStatics>([&](auto&& f) { return f.FindAllAsync(); });
    }
    inline auto User::FindAllAsync(Windows::System::UserType const& type)
    {
        return impl::call_factory<User, Windows::System::IUserStatics>([&](auto&& f) { return f.FindAllAsync(type); });
    }
    inline auto User::FindAllAsync(Windows::System::UserType const& type, Windows::System::UserAuthenticationStatus const& status)
    {
        return impl::call_factory<User, Windows::System::IUserStatics>([&](auto&& f) { return f.FindAllAsync(type, status); });
    }
    inline auto User::GetFromId(param::hstring const& nonRoamableId)
    {
        return impl::call_factory<User, Windows::System::IUserStatics>([&](auto&& f) { return f.GetFromId(nonRoamableId); });
    }
    inline auto UserDeviceAssociation::FindUserFromDeviceId(param::hstring const& deviceId)
    {
        return impl::call_factory<UserDeviceAssociation, Windows::System::IUserDeviceAssociationStatics>([&](auto&& f) { return f.FindUserFromDeviceId(deviceId); });
    }
    inline auto UserDeviceAssociation::UserDeviceAssociationChanged(Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler)
    {
        return impl::call_factory<UserDeviceAssociation, Windows::System::IUserDeviceAssociationStatics>([&](auto&& f) { return f.UserDeviceAssociationChanged(handler); });
    }
    inline UserDeviceAssociation::UserDeviceAssociationChanged_revoker UserDeviceAssociation::UserDeviceAssociationChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> const& handler)
    {
        auto f = get_activation_factory<UserDeviceAssociation, Windows::System::IUserDeviceAssociationStatics>();
        return { f, f.UserDeviceAssociationChanged(handler) };
    }
    inline auto UserDeviceAssociation::UserDeviceAssociationChanged(winrt::event_token const& token)
    {
        impl::call_factory<UserDeviceAssociation, Windows::System::IUserDeviceAssociationStatics>([&](auto&& f) { return f.UserDeviceAssociationChanged(token); });
    }
    inline UserPicker::UserPicker() :
        UserPicker(impl::call_factory<UserPicker>([](auto&& f) { return f.template ActivateInstance<UserPicker>(); }))
    {
    }
    inline auto UserPicker::IsSupported()
    {
        return impl::call_factory<UserPicker, Windows::System::IUserPickerStatics>([&](auto&& f) { return f.IsSupported(); });
    }
    template <typename L> DispatcherQueueHandler::DispatcherQueueHandler(L handler) :
        DispatcherQueueHandler(impl::make_delegate<DispatcherQueueHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> DispatcherQueueHandler::DispatcherQueueHandler(F* handler) :
        DispatcherQueueHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> DispatcherQueueHandler::DispatcherQueueHandler(O* object, M method) :
        DispatcherQueueHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> DispatcherQueueHandler::DispatcherQueueHandler(com_ptr<O>&& object, M method) :
        DispatcherQueueHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> DispatcherQueueHandler::DispatcherQueueHandler(weak_ref<O>&& object, M method) :
        DispatcherQueueHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto DispatcherQueueHandler::operator()() const
    {
        check_hresult((*(impl::abi_t<DispatcherQueueHandler>**)this)->Invoke());
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::System::IAppActivationResult> : winrt::impl::hash_base<winrt::Windows::System::IAppActivationResult> {};
    template<> struct hash<winrt::Windows::System::IAppDiagnosticInfo> : winrt::impl::hash_base<winrt::Windows::System::IAppDiagnosticInfo> {};
    template<> struct hash<winrt::Windows::System::IAppDiagnosticInfo2> : winrt::impl::hash_base<winrt::Windows::System::IAppDiagnosticInfo2> {};
    template<> struct hash<winrt::Windows::System::IAppDiagnosticInfo3> : winrt::impl::hash_base<winrt::Windows::System::IAppDiagnosticInfo3> {};
    template<> struct hash<winrt::Windows::System::IAppDiagnosticInfoStatics> : winrt::impl::hash_base<winrt::Windows::System::IAppDiagnosticInfoStatics> {};
    template<> struct hash<winrt::Windows::System::IAppDiagnosticInfoStatics2> : winrt::impl::hash_base<winrt::Windows::System::IAppDiagnosticInfoStatics2> {};
    template<> struct hash<winrt::Windows::System::IAppDiagnosticInfoWatcher> : winrt::impl::hash_base<winrt::Windows::System::IAppDiagnosticInfoWatcher> {};
    template<> struct hash<winrt::Windows::System::IAppDiagnosticInfoWatcherEventArgs> : winrt::impl::hash_base<winrt::Windows::System::IAppDiagnosticInfoWatcherEventArgs> {};
    template<> struct hash<winrt::Windows::System::IAppExecutionStateChangeResult> : winrt::impl::hash_base<winrt::Windows::System::IAppExecutionStateChangeResult> {};
    template<> struct hash<winrt::Windows::System::IAppMemoryReport> : winrt::impl::hash_base<winrt::Windows::System::IAppMemoryReport> {};
    template<> struct hash<winrt::Windows::System::IAppMemoryReport2> : winrt::impl::hash_base<winrt::Windows::System::IAppMemoryReport2> {};
    template<> struct hash<winrt::Windows::System::IAppMemoryUsageLimitChangingEventArgs> : winrt::impl::hash_base<winrt::Windows::System::IAppMemoryUsageLimitChangingEventArgs> {};
    template<> struct hash<winrt::Windows::System::IAppResourceGroupBackgroundTaskReport> : winrt::impl::hash_base<winrt::Windows::System::IAppResourceGroupBackgroundTaskReport> {};
    template<> struct hash<winrt::Windows::System::IAppResourceGroupInfo> : winrt::impl::hash_base<winrt::Windows::System::IAppResourceGroupInfo> {};
    template<> struct hash<winrt::Windows::System::IAppResourceGroupInfo2> : winrt::impl::hash_base<winrt::Windows::System::IAppResourceGroupInfo2> {};
    template<> struct hash<winrt::Windows::System::IAppResourceGroupInfoWatcher> : winrt::impl::hash_base<winrt::Windows::System::IAppResourceGroupInfoWatcher> {};
    template<> struct hash<winrt::Windows::System::IAppResourceGroupInfoWatcherEventArgs> : winrt::impl::hash_base<winrt::Windows::System::IAppResourceGroupInfoWatcherEventArgs> {};
    template<> struct hash<winrt::Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs> {};
    template<> struct hash<winrt::Windows::System::IAppResourceGroupMemoryReport> : winrt::impl::hash_base<winrt::Windows::System::IAppResourceGroupMemoryReport> {};
    template<> struct hash<winrt::Windows::System::IAppResourceGroupStateReport> : winrt::impl::hash_base<winrt::Windows::System::IAppResourceGroupStateReport> {};
    template<> struct hash<winrt::Windows::System::IAppUriHandlerHost> : winrt::impl::hash_base<winrt::Windows::System::IAppUriHandlerHost> {};
    template<> struct hash<winrt::Windows::System::IAppUriHandlerHostFactory> : winrt::impl::hash_base<winrt::Windows::System::IAppUriHandlerHostFactory> {};
    template<> struct hash<winrt::Windows::System::IAppUriHandlerRegistration> : winrt::impl::hash_base<winrt::Windows::System::IAppUriHandlerRegistration> {};
    template<> struct hash<winrt::Windows::System::IAppUriHandlerRegistrationManager> : winrt::impl::hash_base<winrt::Windows::System::IAppUriHandlerRegistrationManager> {};
    template<> struct hash<winrt::Windows::System::IAppUriHandlerRegistrationManagerStatics> : winrt::impl::hash_base<winrt::Windows::System::IAppUriHandlerRegistrationManagerStatics> {};
    template<> struct hash<winrt::Windows::System::IDateTimeSettingsStatics> : winrt::impl::hash_base<winrt::Windows::System::IDateTimeSettingsStatics> {};
    template<> struct hash<winrt::Windows::System::IDispatcherQueue> : winrt::impl::hash_base<winrt::Windows::System::IDispatcherQueue> {};
    template<> struct hash<winrt::Windows::System::IDispatcherQueue2> : winrt::impl::hash_base<winrt::Windows::System::IDispatcherQueue2> {};
    template<> struct hash<winrt::Windows::System::IDispatcherQueueController> : winrt::impl::hash_base<winrt::Windows::System::IDispatcherQueueController> {};
    template<> struct hash<winrt::Windows::System::IDispatcherQueueControllerStatics> : winrt::impl::hash_base<winrt::Windows::System::IDispatcherQueueControllerStatics> {};
    template<> struct hash<winrt::Windows::System::IDispatcherQueueShutdownStartingEventArgs> : winrt::impl::hash_base<winrt::Windows::System::IDispatcherQueueShutdownStartingEventArgs> {};
    template<> struct hash<winrt::Windows::System::IDispatcherQueueStatics> : winrt::impl::hash_base<winrt::Windows::System::IDispatcherQueueStatics> {};
    template<> struct hash<winrt::Windows::System::IDispatcherQueueTimer> : winrt::impl::hash_base<winrt::Windows::System::IDispatcherQueueTimer> {};
    template<> struct hash<winrt::Windows::System::IFolderLauncherOptions> : winrt::impl::hash_base<winrt::Windows::System::IFolderLauncherOptions> {};
    template<> struct hash<winrt::Windows::System::IKnownUserPropertiesStatics> : winrt::impl::hash_base<winrt::Windows::System::IKnownUserPropertiesStatics> {};
    template<> struct hash<winrt::Windows::System::ILaunchUriResult> : winrt::impl::hash_base<winrt::Windows::System::ILaunchUriResult> {};
    template<> struct hash<winrt::Windows::System::ILauncherOptions> : winrt::impl::hash_base<winrt::Windows::System::ILauncherOptions> {};
    template<> struct hash<winrt::Windows::System::ILauncherOptions2> : winrt::impl::hash_base<winrt::Windows::System::ILauncherOptions2> {};
    template<> struct hash<winrt::Windows::System::ILauncherOptions3> : winrt::impl::hash_base<winrt::Windows::System::ILauncherOptions3> {};
    template<> struct hash<winrt::Windows::System::ILauncherOptions4> : winrt::impl::hash_base<winrt::Windows::System::ILauncherOptions4> {};
    template<> struct hash<winrt::Windows::System::ILauncherStatics> : winrt::impl::hash_base<winrt::Windows::System::ILauncherStatics> {};
    template<> struct hash<winrt::Windows::System::ILauncherStatics2> : winrt::impl::hash_base<winrt::Windows::System::ILauncherStatics2> {};
    template<> struct hash<winrt::Windows::System::ILauncherStatics3> : winrt::impl::hash_base<winrt::Windows::System::ILauncherStatics3> {};
    template<> struct hash<winrt::Windows::System::ILauncherStatics4> : winrt::impl::hash_base<winrt::Windows::System::ILauncherStatics4> {};
    template<> struct hash<winrt::Windows::System::ILauncherStatics5> : winrt::impl::hash_base<winrt::Windows::System::ILauncherStatics5> {};
    template<> struct hash<winrt::Windows::System::ILauncherUIOptions> : winrt::impl::hash_base<winrt::Windows::System::ILauncherUIOptions> {};
    template<> struct hash<winrt::Windows::System::ILauncherViewOptions> : winrt::impl::hash_base<winrt::Windows::System::ILauncherViewOptions> {};
    template<> struct hash<winrt::Windows::System::IMemoryManagerStatics> : winrt::impl::hash_base<winrt::Windows::System::IMemoryManagerStatics> {};
    template<> struct hash<winrt::Windows::System::IMemoryManagerStatics2> : winrt::impl::hash_base<winrt::Windows::System::IMemoryManagerStatics2> {};
    template<> struct hash<winrt::Windows::System::IMemoryManagerStatics3> : winrt::impl::hash_base<winrt::Windows::System::IMemoryManagerStatics3> {};
    template<> struct hash<winrt::Windows::System::IMemoryManagerStatics4> : winrt::impl::hash_base<winrt::Windows::System::IMemoryManagerStatics4> {};
    template<> struct hash<winrt::Windows::System::IProcessLauncherOptions> : winrt::impl::hash_base<winrt::Windows::System::IProcessLauncherOptions> {};
    template<> struct hash<winrt::Windows::System::IProcessLauncherResult> : winrt::impl::hash_base<winrt::Windows::System::IProcessLauncherResult> {};
    template<> struct hash<winrt::Windows::System::IProcessLauncherStatics> : winrt::impl::hash_base<winrt::Windows::System::IProcessLauncherStatics> {};
    template<> struct hash<winrt::Windows::System::IProcessMemoryReport> : winrt::impl::hash_base<winrt::Windows::System::IProcessMemoryReport> {};
    template<> struct hash<winrt::Windows::System::IProtocolForResultsOperation> : winrt::impl::hash_base<winrt::Windows::System::IProtocolForResultsOperation> {};
    template<> struct hash<winrt::Windows::System::IRemoteLauncherOptions> : winrt::impl::hash_base<winrt::Windows::System::IRemoteLauncherOptions> {};
    template<> struct hash<winrt::Windows::System::IRemoteLauncherStatics> : winrt::impl::hash_base<winrt::Windows::System::IRemoteLauncherStatics> {};
    template<> struct hash<winrt::Windows::System::IShutdownManagerStatics> : winrt::impl::hash_base<winrt::Windows::System::IShutdownManagerStatics> {};
    template<> struct hash<winrt::Windows::System::IShutdownManagerStatics2> : winrt::impl::hash_base<winrt::Windows::System::IShutdownManagerStatics2> {};
    template<> struct hash<winrt::Windows::System::ITimeZoneSettingsStatics> : winrt::impl::hash_base<winrt::Windows::System::ITimeZoneSettingsStatics> {};
    template<> struct hash<winrt::Windows::System::ITimeZoneSettingsStatics2> : winrt::impl::hash_base<winrt::Windows::System::ITimeZoneSettingsStatics2> {};
    template<> struct hash<winrt::Windows::System::IUser> : winrt::impl::hash_base<winrt::Windows::System::IUser> {};
    template<> struct hash<winrt::Windows::System::IUserAuthenticationStatusChangeDeferral> : winrt::impl::hash_base<winrt::Windows::System::IUserAuthenticationStatusChangeDeferral> {};
    template<> struct hash<winrt::Windows::System::IUserAuthenticationStatusChangingEventArgs> : winrt::impl::hash_base<winrt::Windows::System::IUserAuthenticationStatusChangingEventArgs> {};
    template<> struct hash<winrt::Windows::System::IUserChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::IUserChangedEventArgs> {};
    template<> struct hash<winrt::Windows::System::IUserChangedEventArgs2> : winrt::impl::hash_base<winrt::Windows::System::IUserChangedEventArgs2> {};
    template<> struct hash<winrt::Windows::System::IUserDeviceAssociationChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::IUserDeviceAssociationChangedEventArgs> {};
    template<> struct hash<winrt::Windows::System::IUserDeviceAssociationStatics> : winrt::impl::hash_base<winrt::Windows::System::IUserDeviceAssociationStatics> {};
    template<> struct hash<winrt::Windows::System::IUserPicker> : winrt::impl::hash_base<winrt::Windows::System::IUserPicker> {};
    template<> struct hash<winrt::Windows::System::IUserPickerStatics> : winrt::impl::hash_base<winrt::Windows::System::IUserPickerStatics> {};
    template<> struct hash<winrt::Windows::System::IUserStatics> : winrt::impl::hash_base<winrt::Windows::System::IUserStatics> {};
    template<> struct hash<winrt::Windows::System::IUserWatcher> : winrt::impl::hash_base<winrt::Windows::System::IUserWatcher> {};
    template<> struct hash<winrt::Windows::System::AppActivationResult> : winrt::impl::hash_base<winrt::Windows::System::AppActivationResult> {};
    template<> struct hash<winrt::Windows::System::AppDiagnosticInfo> : winrt::impl::hash_base<winrt::Windows::System::AppDiagnosticInfo> {};
    template<> struct hash<winrt::Windows::System::AppDiagnosticInfoWatcher> : winrt::impl::hash_base<winrt::Windows::System::AppDiagnosticInfoWatcher> {};
    template<> struct hash<winrt::Windows::System::AppDiagnosticInfoWatcherEventArgs> : winrt::impl::hash_base<winrt::Windows::System::AppDiagnosticInfoWatcherEventArgs> {};
    template<> struct hash<winrt::Windows::System::AppExecutionStateChangeResult> : winrt::impl::hash_base<winrt::Windows::System::AppExecutionStateChangeResult> {};
    template<> struct hash<winrt::Windows::System::AppMemoryReport> : winrt::impl::hash_base<winrt::Windows::System::AppMemoryReport> {};
    template<> struct hash<winrt::Windows::System::AppMemoryUsageLimitChangingEventArgs> : winrt::impl::hash_base<winrt::Windows::System::AppMemoryUsageLimitChangingEventArgs> {};
    template<> struct hash<winrt::Windows::System::AppResourceGroupBackgroundTaskReport> : winrt::impl::hash_base<winrt::Windows::System::AppResourceGroupBackgroundTaskReport> {};
    template<> struct hash<winrt::Windows::System::AppResourceGroupInfo> : winrt::impl::hash_base<winrt::Windows::System::AppResourceGroupInfo> {};
    template<> struct hash<winrt::Windows::System::AppResourceGroupInfoWatcher> : winrt::impl::hash_base<winrt::Windows::System::AppResourceGroupInfoWatcher> {};
    template<> struct hash<winrt::Windows::System::AppResourceGroupInfoWatcherEventArgs> : winrt::impl::hash_base<winrt::Windows::System::AppResourceGroupInfoWatcherEventArgs> {};
    template<> struct hash<winrt::Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::AppResourceGroupInfoWatcherExecutionStateChangedEventArgs> {};
    template<> struct hash<winrt::Windows::System::AppResourceGroupMemoryReport> : winrt::impl::hash_base<winrt::Windows::System::AppResourceGroupMemoryReport> {};
    template<> struct hash<winrt::Windows::System::AppResourceGroupStateReport> : winrt::impl::hash_base<winrt::Windows::System::AppResourceGroupStateReport> {};
    template<> struct hash<winrt::Windows::System::AppUriHandlerHost> : winrt::impl::hash_base<winrt::Windows::System::AppUriHandlerHost> {};
    template<> struct hash<winrt::Windows::System::AppUriHandlerRegistration> : winrt::impl::hash_base<winrt::Windows::System::AppUriHandlerRegistration> {};
    template<> struct hash<winrt::Windows::System::AppUriHandlerRegistrationManager> : winrt::impl::hash_base<winrt::Windows::System::AppUriHandlerRegistrationManager> {};
    template<> struct hash<winrt::Windows::System::DateTimeSettings> : winrt::impl::hash_base<winrt::Windows::System::DateTimeSettings> {};
    template<> struct hash<winrt::Windows::System::DispatcherQueue> : winrt::impl::hash_base<winrt::Windows::System::DispatcherQueue> {};
    template<> struct hash<winrt::Windows::System::DispatcherQueueController> : winrt::impl::hash_base<winrt::Windows::System::DispatcherQueueController> {};
    template<> struct hash<winrt::Windows::System::DispatcherQueueShutdownStartingEventArgs> : winrt::impl::hash_base<winrt::Windows::System::DispatcherQueueShutdownStartingEventArgs> {};
    template<> struct hash<winrt::Windows::System::DispatcherQueueTimer> : winrt::impl::hash_base<winrt::Windows::System::DispatcherQueueTimer> {};
    template<> struct hash<winrt::Windows::System::FolderLauncherOptions> : winrt::impl::hash_base<winrt::Windows::System::FolderLauncherOptions> {};
    template<> struct hash<winrt::Windows::System::KnownUserProperties> : winrt::impl::hash_base<winrt::Windows::System::KnownUserProperties> {};
    template<> struct hash<winrt::Windows::System::LaunchUriResult> : winrt::impl::hash_base<winrt::Windows::System::LaunchUriResult> {};
    template<> struct hash<winrt::Windows::System::Launcher> : winrt::impl::hash_base<winrt::Windows::System::Launcher> {};
    template<> struct hash<winrt::Windows::System::LauncherOptions> : winrt::impl::hash_base<winrt::Windows::System::LauncherOptions> {};
    template<> struct hash<winrt::Windows::System::LauncherUIOptions> : winrt::impl::hash_base<winrt::Windows::System::LauncherUIOptions> {};
    template<> struct hash<winrt::Windows::System::MemoryManager> : winrt::impl::hash_base<winrt::Windows::System::MemoryManager> {};
    template<> struct hash<winrt::Windows::System::ProcessLauncher> : winrt::impl::hash_base<winrt::Windows::System::ProcessLauncher> {};
    template<> struct hash<winrt::Windows::System::ProcessLauncherOptions> : winrt::impl::hash_base<winrt::Windows::System::ProcessLauncherOptions> {};
    template<> struct hash<winrt::Windows::System::ProcessLauncherResult> : winrt::impl::hash_base<winrt::Windows::System::ProcessLauncherResult> {};
    template<> struct hash<winrt::Windows::System::ProcessMemoryReport> : winrt::impl::hash_base<winrt::Windows::System::ProcessMemoryReport> {};
    template<> struct hash<winrt::Windows::System::ProtocolForResultsOperation> : winrt::impl::hash_base<winrt::Windows::System::ProtocolForResultsOperation> {};
    template<> struct hash<winrt::Windows::System::RemoteLauncher> : winrt::impl::hash_base<winrt::Windows::System::RemoteLauncher> {};
    template<> struct hash<winrt::Windows::System::RemoteLauncherOptions> : winrt::impl::hash_base<winrt::Windows::System::RemoteLauncherOptions> {};
    template<> struct hash<winrt::Windows::System::ShutdownManager> : winrt::impl::hash_base<winrt::Windows::System::ShutdownManager> {};
    template<> struct hash<winrt::Windows::System::TimeZoneSettings> : winrt::impl::hash_base<winrt::Windows::System::TimeZoneSettings> {};
    template<> struct hash<winrt::Windows::System::User> : winrt::impl::hash_base<winrt::Windows::System::User> {};
    template<> struct hash<winrt::Windows::System::UserAuthenticationStatusChangeDeferral> : winrt::impl::hash_base<winrt::Windows::System::UserAuthenticationStatusChangeDeferral> {};
    template<> struct hash<winrt::Windows::System::UserAuthenticationStatusChangingEventArgs> : winrt::impl::hash_base<winrt::Windows::System::UserAuthenticationStatusChangingEventArgs> {};
    template<> struct hash<winrt::Windows::System::UserChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::UserChangedEventArgs> {};
    template<> struct hash<winrt::Windows::System::UserDeviceAssociation> : winrt::impl::hash_base<winrt::Windows::System::UserDeviceAssociation> {};
    template<> struct hash<winrt::Windows::System::UserDeviceAssociationChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::UserDeviceAssociationChangedEventArgs> {};
    template<> struct hash<winrt::Windows::System::UserPicker> : winrt::impl::hash_base<winrt::Windows::System::UserPicker> {};
    template<> struct hash<winrt::Windows::System::UserWatcher> : winrt::impl::hash_base<winrt::Windows::System::UserWatcher> {};
}

namespace winrt
{
    [[nodiscard]] inline auto resume_foreground(
        Windows::System::DispatcherQueue const& dispatcher,
        Windows::System::DispatcherQueuePriority const priority = Windows::System::DispatcherQueuePriority::Normal) noexcept
    {
        struct awaitable
        {
            awaitable(Windows::System::DispatcherQueue const& dispatcher, Windows::System::DispatcherQueuePriority const priority) noexcept :
                m_dispatcher(dispatcher),
                m_priority(priority)
            {
            }

            bool await_ready() const noexcept
            {
                return false;
            }

            bool await_resume() const noexcept
            {
                return m_queued;
            }

            bool await_suspend(winrt::impl::coroutine_handle<> handle)
            {
                m_queued = m_dispatcher.TryEnqueue(m_priority, [handle]
                    {
                        handle();
                    });

                return m_queued;
            }

        private:

            Windows::System::DispatcherQueue const& m_dispatcher;
            Windows::System::DispatcherQueuePriority const m_priority;
            bool m_queued{};
        };

        return awaitable{ dispatcher, priority };
    };

#ifdef _RESUMABLE_FUNCTIONS_SUPPORTED
    inline auto operator co_await(Windows::System::DispatcherQueue const& dispatcher)
    {
        return resume_foreground(dispatcher);
    }
#endif
}
#endif
